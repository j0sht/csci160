/*
 * Write a function that takes a filename and an array of characters as
 *  its two parameters, attempts to open the file for appending.
 *
 * If successful, it writes the contents of the array into the file
 *  otherwise it displays an error message.
 */
#include <cstdio>
#include <cstdlib>

const int MAX_LEN = 255;

void appendArray(const char *dest, char s[]) {
    FILE *fpout = fopen(dest, "a");
    if (fpout == NULL) {
	printf("ERROR: Couldn't open %s\n", dest);
	return;
    }

    for (int i = 0; (s[i] != '\0') && (i < MAX_LEN); i++)
	fputc(s[i], fpout);

    fclose(fpout);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
	printf("Usage: %s <file>\n", argv[0]);
	exit(1);
    }

    char s[MAX_LEN];
    printf("Enter string (MAX = %d): ", MAX_LEN);
    fgets(s, MAX_LEN, stdin);
    appendArray(argv[1], s);

    return 0;
}
