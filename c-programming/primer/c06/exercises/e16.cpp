/*
 * Daphne invests $100 at 10% simple interest. (That is, every year, the
 *  investment earns an interest equal to 10% of the original investment.)
 *
 * Deirdre invests $100 at 5% interest compounded annually. (That is,
 *  interest is 5% of the current balance, including previous addition
 *  of interest.)
 *
 * Write a program that finds out how many years it takes for the value of
 *  Deirdre's investment to exceed the value of Daphne's investment.
 *
 * Show the two values at the same time.
 */
#include <cstdio>

const double DAPHNE_INTEREST    = 0.1;
const double DEIRDRE_INTEREST   = 0.05;
const double INITIAL_INVESTMENT = 100.00;

int main() {
    double daphne = INITIAL_INVESTMENT;
    double deirdre = INITIAL_INVESTMENT;
    int years;
    for (years = 1; deirdre <= daphne; years++) {
	daphne += INITIAL_INVESTMENT * DAPHNE_INTEREST;
	deirdre += deirdre * DEIRDRE_INTEREST;
	printf("Year %d:\n    Daphne:  $%.2lf\n    Deirdre: $%.2lf\n\n",
	       years, daphne, deirdre);
    }
    years--;
    printf("It took %d years for the value of Deirdre's investment to "
	   "exceed the value of Daphne's investment.\n", years);

    return 0;
}
