#include <cstdio>

/*
 * Write a complete and correct C++ function that fulfills these reqs:
 *  1. The function is named PrintBetween
 *  2. The function takes two integer parameters, named low and high
 *  3. The function displays all integer values that are greater than
 *     low and less than high
 *  4. The function returns an int value: The sum of all the integers
 *     it printed out
 *
 *  (If low is greater than or equal to high it would not print anything
 *   and would return 0)
 */
int PrintBetween(int low, int high) {
    int sum = 0;
    for (int i = low+1; i < high; i++) {
	printf("%d\n", i);
	sum += i;
    }
    return sum;
}

int main() {
    int res1 = PrintBetween(3,7);
    printf("res1 == 15? ");
    printf("%s\n", (res1 == 15) ? "true" : "false");
    int res2 = PrintBetween(7,3);
    printf("res2 == 0? ");
    printf("%s\n", (res2 == 0) ? "true" : "false");
    int res3 = PrintBetween(3,3);
    printf("res3 == 0? ");
    printf("%s\n", (res3 == 0) ? "true" : "false");
    return 0;
}
