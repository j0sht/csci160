/*
 * Write a program that reads input until encountering the # character
 *  and then reports the number of spaces read, the number of newline
 *  characters read, and the number of all other characters read.
 */
#include <cstdio>

const char SPACE = ' ';
const char NEWLINE = '\n';

int main() {
    unsigned int spaces, newlines, other;
    spaces = newlines = other = 0;
    char c;

    printf("Enter '#' to quit:\n\n");
    while ((c = getchar()) != '#') {
	if (c == SPACE)
	    spaces++;
	else if (c == NEWLINE)
	    newlines++;
	else
	    other++;
    }
    printf("\nSpaces = %u\nNewlines = %u\nOther = %u\n",
	   spaces, newlines, other);

    return 0;
}
