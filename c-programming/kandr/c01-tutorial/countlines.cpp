#include <cstdio>

// count lines in input
int main() {
    int c, nl;
    nl = 0;
    while ((c=getchar()) != EOF)
	// a character written between single quotes represents
	//  an integer value equal to the numerical value of
	//  the character in the machine's character set.
	// called a "character constant"
	// Example) In ASCII 'A' == 65
	if (c == '\n')
	    ++nl;
    printf("%d\n", nl);
    return 0;
}
