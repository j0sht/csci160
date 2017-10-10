#include <cstdio>

// counts digits, white space, others
int main() {
    int c, i, nwhite, nother;
    int ndigit[10]; // array of 10 integers

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
	ndigit[i] = 0;

    while ((c=getchar()) != EOF)
	if (c >= '0' && c <= '9')
	    // only works if '0', '1', ..., '9' have consecutive
	    // increasing values
	    ++ndigit[c-'0'];
	else if (c == ' ' || c == '\n' || c == '\t')
	    ++nwhite;
	else
	    ++nother;

    printf("digits =");
    for (i = 0; i < 10; ++i)
	printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}
