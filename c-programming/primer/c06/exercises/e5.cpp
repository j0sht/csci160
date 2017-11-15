/*
 * Have a program request the user to enter an uppercase letter.
 *
 * Use nested loops to produce a pyramid pattern like this:
 *
 *      A
 *     ABA
 *    ABCBA
 *   ABCDCBA
 *  ABCDEDCBA
 *
 * The pattern should extend to the character entered. For example,
 *  the preceding pattern would result from an input value of E.
 */
#include <cstdio>

int main() {
    char entered;
    printf("Enter character: ");
    scanf("%c", &entered);
    int max_rows = entered - 'A';

    int row, spaces, chars;
    for (row = 0, spaces = max_rows, chars = 'A';
	 row <= max_rows;
	 row++, spaces--, chars++) {
	for (int i = 0; i < spaces; i++)
	    printf(" ");
	for (char c = 'A'; c < chars+1; c++)
	    printf("%c", c);
	for (char c = chars-1; c >= 'A'; c--)
	    printf("%c", c);
	printf("\n");
    }

    return 0;
}
