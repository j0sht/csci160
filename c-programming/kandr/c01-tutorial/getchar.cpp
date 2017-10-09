#include <cstdio>

// copy input to output - version 1
int main() {
    // use int because c needs to be big enough to hold EOF
    int c;
    c = getchar();
    // EOF is an integer defined in cstdio
    while (c != EOF) {
	putchar(c);
	c = getchar();
    }
    return 0;
}
