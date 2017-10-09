// Write a program to copy its input to its output replacing each
//  string of one or more blanks by a single blank.
#include <cstdio>

int main() {
    int c, lastchar;
    while ((c=getchar()) != EOF) {
	if (lastchar == ' ' && c == ' ')
	    continue;
	else {
	    putchar(c);
	    lastchar = c;
	}
    }
    return 0;
}
