#include <cstdio>

// copy input to output - version 2
int main() {
    int c;
    // any assignment is an expression and has a value
    // the value of any assignment expression is the value on the
    //  left hand side and returned after the assignment.
    // NOTE: the parentheses around the assignment within the
    //  condition is necessary. '!=' has greater precedence than '='
    //  c = getchar() != EOF  ===
    //  c = (getchar() != EOF)
    while ((c=getchar()) != EOF)
	putchar(c);
    return 0;
}
