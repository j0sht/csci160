/*
 * Write a function that takes two filenames and an integer N as parameters,
 *  attempts to open the first for reading and the second for writing, and
 *  copies the first N characters of the first file into the second
 */
#include <cstdio>
#include <cstdlib>

void copyFirstN(const char *source, const char *dest, int n) {
    FILE *fpin;
    FILE *fpout;

    fpin = fopen(source, "r");
    if (fpin == NULL) {
	printf("Couldn't open %s\n", source);
	return;
    }

    fpout = fopen(dest, "w");
    if (fpout == NULL) {
	printf("Couldn't open %s\n", dest);
	fclose(fpin);
	return;
    }

    char c;
    for (int i = 0; (i < n) && (c != EOF); i++)
	if ((c=getc(fpin)) != EOF)
	    fputc(c, fpout);

    if (c != '\n' && c != EOF)
	fputc('\n', fpout);

    fclose(fpin);
    fclose(fpout);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
	printf("Usage: %s <source file> <destination file>\n", argv[0]);
	exit(1);
    }
    int n;
    printf("Enter number of characters to copy: ");
    int res = scanf("%d", &n);
    if (res != 1) {
	printf("Not an integer\n");
	exit(1);
    }
    copyFirstN(argv[1], argv[2], n);

    return 0;
}
