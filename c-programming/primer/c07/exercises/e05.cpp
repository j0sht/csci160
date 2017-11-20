/*
 * Redo exercise 4 using a switch.
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
	int even = num % 2;
	switch (even) {
	case 0:
	    even_count++;
	    even_total += num;
	    break;
	default:
	    odd_count++;
	    odd_total += num;
	    break;
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
