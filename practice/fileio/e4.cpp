/*
 * Write a program that accepts a filename as a command line argument,
 *  attempts to open the file for reading, and (if successful) counts and
 *  displays the total number of lines in the file.
 */
#include <cstdio>
#include <cstdlib>

int lineCount(const char *file) {
    FILE *fpin = fopen(file, "r");
    if (fpin == NULL) {
	printf("ERROR: Couldn't open %s\n", file);
	return -1;
    }
    int lines = 0;
    char c;
    while ((c=getc(fpin)) != EOF)
	if (c == '\n')
	    lines++;

    fclose(fpin);
    return lines;
}
int main(int argc, char *argv[]) {
    if (argc != 2) {
	printf("Usage: %s <file>\n", argv[0]);
	exit(1);
    }
    int lines = lineCount(argv[1]);
    if (lines != -1) {
	printf("Number of lines: %d\n", lines);
    }

    return 0;
}
