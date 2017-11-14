// rules.cpp -- precedence test
#include <cstdio>

int main() {
    int top, score;

    top = score = -(2+5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);

    return 0;
}
