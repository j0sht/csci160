/*
 * Consider these two infinite series:
 *
 *  1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
 *  1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
 *
 * Write a program that evaluates running totals of these two series up
 *  to some limit number of terms.
 *
 * Hint: -1 times itself an odd number of times is -1, and -1 times itself
 *       an even number of times is 1.
 *
 * Have the user enter the limit interactively; let a zero or negative
 *  value terminate input. Look at the running totals after 100 terms,
 *  1000 terms, 10,000 terms. Does etier series appear to be converging
 *  to some value?
 */
#include <cstdio>

double getSeriesAUpTo(double n);
double getSeriesBUpTo(double n);
double getNumberOfTerms();

int main() {
    double n = getNumberOfTerms();
    while (n > 0) {
	double a = getSeriesAUpTo(n);
	double b = getSeriesBUpTo(n);
	printf("series a: %g\n", a);
	printf("series b: %g\n", b);
	n = getNumberOfTerms();
    }
    printf("Done\n");

    return 0;
}

double getSeriesAUpTo(double n) {
    double result = 0.0;
    for (double i = 1.0; i <= n; i += 1.0) {
	result += 1.0 / i;
    }
    return result;
}

double getSeriesBUpTo(double n) {
    double result = 0.0;
    double sign = -1;
    for (double i = 1.0; i <= n; i += 1.0) {
	result += sign * (1.0 / i);
	sign *= -1;;
    }
    return result;
}

double getNumberOfTerms() {
    double n;
    int rv;
    do {
	printf("Enter number of terms (<= 0 to quit): ");
	rv = scanf("%lf", &n);
	if (rv != 1) {
	    scanf("%*s");
	}
    } while (rv != 1);
    return n;
}
