/*
 * Write  a program that requests lower and upper integer limits, calculates
 *  the sum of all the integer squares from the square of the lower limit
 *  to the upper limit, and diplays the answer.
 *
 * The program should continue to prompt for limits and display answers until
 *  the user enters an upper limit that is equal to or less than the lower
 *  limit.
 */
#include <cstdio>

int sumOfSquares(int lower, int upper);
void getLowerAndUpperLimits(int &lower, int &upper);

int main() {
    int lower, upper;
    getLowerAndUpperLimits(lower, upper);
    while (lower < upper) {
	printf("The sums of squares from %d to %d is %d\n",
	       lower*lower, upper*upper, sumOfSquares(lower, upper));
	getLowerAndUpperLimits(lower, upper);
    }
    printf("Done\n");
    return 0;
}

int sumOfSquares(int lower, int upper) {
    int sum = 0;
    for (int i = lower; i <= upper; i++) {
	sum += i * i;
    }
    return sum;
}

void getLowerAndUpperLimits(int &lower, int &upper) {
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
}
