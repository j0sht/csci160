/*
 * Write a program that reads integers until 0 is entered. After input
 *  terminates, the program should report the total number of even integers
 *  (excluding the 0) entered, the average value of the even integers, the
 *  total number of odd integers entered, and the average value of odd
 *  integers.
 */
#include <cstdio>

int main() {
    unsigned even_count, odd_count;
    even_count = odd_count = 0;
    int even_total, odd_total;
    even_total = odd_total = 0;
    int num;

    printf("Enter integers (0 to quit): ");
    while (scanf("%d", &num) == 1 && num != 0) {
	if (num % 2 == 0) {
	    even_count++;
	    even_total += num;
	} else {
	    odd_count++;
	    odd_total += num;
	}
    }
    if (even_count > 0)
	printf("\nEvens = %u; Even avg = %.2lf\n",
	       even_count, (double) even_total / (double) even_count);
    else
	printf("No evens\n");
    if (odd_count > 0)
	printf("Odds = %u; Odd avg = %.2lf\n",
	       odd_count, (double) odd_total / (double) odd_count);
    else
	printf("No odds\n");

    return 0;
}
