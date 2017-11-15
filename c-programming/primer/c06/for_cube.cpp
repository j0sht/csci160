// for_cube.cpp -- using a for loop to make a table of cubes
#include <cstdio>

int main() {
    int num;

    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++) {
	printf("%5d %8d\n", num, num*num*num);
    }

    return 0;
}
