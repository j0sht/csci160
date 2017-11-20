/*
 * Using if-else statements, write a program that reads input up to #,
 *  replaces each period with an exclamation mark, replaces each exclamation
 *  mark initially present with two exclamation makrs, and reports at the
 *  end the number of substitutions it has made.
 */
#include <cstdio>

int main() {
    unsigned sub_count = 0;
    char c;

    while ((c=getchar()) != '#') {
	if (c == '.' || c == '!') {
	    sub_count++;
	    printf("%s", (c == '.') ? "!" : "!!");
	} else
	    putchar(c);
    }
    printf("\nSubstitutions: %u\n", sub_count);

    return 0;
}
