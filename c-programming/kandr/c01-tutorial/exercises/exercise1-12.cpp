// Write a program that prints its input one word per line
#include <cstdio>

const int IN = 1;  // inside a word
const int OUT = 0; // outside a word

int main() {
    int c, lastchar, state;
    state = OUT;
    while ((c=getchar()) != EOF) {
	if (c == ' ' || c == '\n' || c == '\t') {
	    state = OUT;
	} else {
	    state = IN;
	}
	if (state == IN) {
	    putchar(c);
	} else {
	    if ((lastchar == ' ' || lastchar == '\n' || lastchar == '\t') &&
		(c == ' ' || c == '\n' || c == '\t'))
		continue;
	    putchar('\n');
	}
	lastchar = c;
    }
    return 0;
}
