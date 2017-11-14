// squares.cpp -- produces a table of first 20 squares
#include <cstdio>

int main() {
    int num = 1;

    while (num < 21) {
	printf("%4d %6d\n", num, num * num);
	num += 1;
    }

    return 0;
}
