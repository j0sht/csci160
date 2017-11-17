/*
 * Chuckie Lucky won a million dollars (after taxes), which he places in
 *  an account that earns 8% a year. On the last day of each year,
 *  Chuckie withdraw's $100,000.
 *
 * Write a program that finds out how many years it takes for Chuckie to
 *  empty his account.
 */
#include <cstdio>

const double WINNINGS   = 1000000.0;
const double INTEREST   = 0.08;
const double WITHDRAWAL = 100000.0;

int main() {
    double chuckie = WINNINGS;
    int years = 0;
    while (chuckie >= 0) {
	chuckie += chuckie * INTEREST;
	years++;
	printf("Year %d:\n    Chuckie's account before withdrawal: $%.2lf\n",
	       years, chuckie);
	chuckie -= WITHDRAWAL;
	printf("    Chuckie's account after withdrawal:  $%.2lf\n\n",
	       chuckie);
    }
    printf("It took %d years for Chuckie to empty his account.\n",
	   years);

    return 0;
}
