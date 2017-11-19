// cypher1.cpp -- alters input, preserving space
#include <cstdio>

#define SPACE ' '

int main() {
    char ch;

    while ((ch = getchar()) != '\n') {
	if (ch == SPACE)
	    putchar(ch);
	else
	    putchar(ch + 1);
    }
    putchar(ch);

    return 0;
}
