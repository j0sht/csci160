/*
 * Write the printFactors function following the alogorithm in the
 *  comments, using ints for all variables.
 *
 * Assume cmath has been included.
 */
#include <cstdio>
#include <cmath>

void printFactors(int n) {
    // for each integer x from 1 to n (inclusive)
    for (int x = 1; x <= n; x++) {
	// limit = sqrt x
	int limit = sqrt(x);
	// for each integer f from 1 to limit (inclusive)
	for (int f = 1; f <= limit; f++) {
	    // if f evenly divides x then
	    if ((x % f) == 0) {
		// d = x / f
		int d = x / f;
		// print a message saying f and d are factors of x
		printf("%d and %d are factors of %d\n", f, d, x);
	    }
	}
    }
}

int main() {
    printFactors(5);
    return 0;
}
