/*
 * Write a program that creates an eight-element array of ints and sets
 *  the elements to the first eight powers of 2 and then prints the values.
 *
 * Use a for loop to set the values, and, for variety, use a do-while
 *  loop to diplay the values.
 */
#include <cstdio>
#include <cmath>

const int SIZE = 8;

int main() {
    int nums[SIZE];
    int i;
    for (i = 0; i < SIZE; i++) {
	nums[i] = pow(2, i);
    }
    i = 0;
    do {
	printf("2 ^ %d = %3d\n", i, nums[i]);
    } while (++i < SIZE);

    return 0;
}
