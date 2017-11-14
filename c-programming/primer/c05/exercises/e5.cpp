/*
 * Change the program addmeup.cpp, which found the sum of the 20 first
 *  integers.
 *
 * Modify the program so that you can tell it interactively how far the
 *  calculation should proceed. That is, replace the 20 with a variable
 *  that is read in.
 */
#include <cstdio>

int main() {
    int count, sum;

    count = 0;
    sum = 0;

    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    while (count++ < limit)
	sum += count;

    printf("sum = %d\n", sum);

    return 0;
}
