/*
 * Write a function that takes a filename as its parameter and attempts
 *  to open the file for reading.
 *
 * If successful, it counts and returns the total number of characters
 *  in the file, otherwise it returns -1.
 */
#include <cstdio>
#include <cstring>

const int MAX_LEN = 50;

int countChars(const char *filename) {
    // try opening the file, use fpin to store file pointer
    FILE *fpin = fopen(filename, "r");
    // check if open was successful
    if (fpin == NULL)
	// didn't open, return -1
	return -1;
    
    int count = 0; // number of characters
    while (getc(fpin) != EOF)
	count++;
    // close the file
    fclose(fpin);

    return count;
}

void stripNewline(char *filename) {
    char tmp[MAX_LEN];
    int i;
    for (i = 0; filename[i] != '\n'; i++)
	tmp[i] = filename[i];
    tmp[i] = '\0';
    strncpy(filename, tmp, MAX_LEN);
}

int main() {
    char filename[MAX_LEN];
    printf("Enter file name: ");
    fgets(filename, MAX_LEN, stdin);
    stripNewline(filename);
    int count = countChars(filename);
    if (count == -1)
	printf("Couldn't open %s\n", filename);
    else
	printf("Number of characters: %d\n", count);

    return 0;
}
