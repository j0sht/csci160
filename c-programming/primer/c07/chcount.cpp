// chcount.cpp -- use the logical AND operator
#include <cstdio>
#include <ciso646> // use and instead of '&&'

#define PERIOD '.'

int main() {
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
	if (ch != '"' and ch != '\'')
	    charcount++;
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
