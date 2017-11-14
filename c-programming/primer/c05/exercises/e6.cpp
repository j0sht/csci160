/*
 * Now modify the program from e5 so that it computes the sum of squares.
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
	sum += count * count;

    printf("sum = %d\n", sum);

    return 0;
}
