// sizeof.cpp -- uses sizeof operator
// uses c99 %z modifier -- try %u or %lu if you lack %zd
#include <cstdio>

int main() {
    int n = 0;
    size_t intsize;

    // if operand is a type, must enclose in parentheses
    intsize = sizeof(int);

    // if operand is a specific object (storage location),
    //  such as a variable name, you don't need parentheses for the
    //  sizeof operator
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
	   n, sizeof n, intsize);

    return 0;
}
