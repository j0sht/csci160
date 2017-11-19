// chcount.cpp -- use the logical AND operator
#include <cstdio>

#define PERIOD '.'

int main() {
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
	if (ch != '"' && ch != '\'')
	    charcount++;
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
