/*
 * Write a program that reads input until encountering #.
 *
 * Have the program print each input character and its ASCII decimal code.
 * Print 8 character-code pairs per line.
 *
 * Suggestion: Use a character count and the modulus operator (%) to print
 *  a newline character for every eight cycles of the loop.
 */
#include <cstdio>

int main() {
    int count = 0;
    char c;
    while ((c = getchar()) != '#' && c != '\n') {
	count++;
	printf("'%c' = %d; ", c, c);
	if (count % 8 == 0)
	    printf("\n");
    }
    printf("\nDone\n");

    return 0;
}
