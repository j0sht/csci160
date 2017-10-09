// Count lines, words and characters
// word is any sequence of characters that does not contain
//  a blank, tab, or newline
// version of UNIX program wc
#include <cstdio>

const int IN = 1;  // inside a word
const int OUT = 0; // outside a word

int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c=getchar()) != EOF) {
	++nc;
	if (c == '\n')
	    ++nl;
	if (c == ' ' || c == '\n' || c == '\t')
	    state = OUT;
	else if (state == OUT) {
	    state = IN;
	    ++nw;
	}
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}
