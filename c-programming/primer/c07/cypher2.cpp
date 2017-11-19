// cypher2.cpp -- alters input, preserving non-letters
#include <cstdio>
#include <cctype> // for isalpha()

int main() {
    char ch;

    while ((ch = getchar()) != '\n') {
	if (isalpha(ch))
	    putchar(ch + 1);
	else
	    putchar(ch);
    }
    putchar(ch);

    return 0;
}
