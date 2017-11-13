// skiptwo.cpp -- skips over first two integers of input
#include <cstdio>

int main() {
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n); // skips two ints, reads the third into n
    printf("The last integer was %d\n", n);
    return 0;
}
