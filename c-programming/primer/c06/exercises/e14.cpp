/*
 * Write a program that creates two eight-element arrays of doubles and
 *  uses a loop to let the user enter values for the eight elements of the
 *  first array.
 *
 * Have the program set the elements of the second array to the cumulative
 *  totals of the elements of the first array.
 *
 * Use loops to display the contents of the two arrays, with the first array
 *  displayed on one line and with each element of the second array displayed
 *  below the corresponding element of the first array.
 */
#include <cstdio>

const int SIZE = 8;

double getNumberForIndex(int n);

int main() {
    double a1[SIZE];
    double a2[SIZE];
    for (int i = 0; i < SIZE; i++) {
	double n = getNumberForIndex(i);
	a1[i] = n;
    }
    for (int i = 0, sum = 0; i < SIZE; i++) {
	double n = a1[i];
	sum += n;
	a2[i] = sum;
    }
    printf("\n\n");
    for (int i = 0; i < SIZE; i++) {
	printf("%5.1lf", a1[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
	printf("%5s", "----");
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
	printf("%5.1lf", a2[i]);
    }
    printf("\n");
    return 0;
}

double getNumberForIndex(int i) {
    double n;
    int rv;
    do {
	printf("Enter number for index %d: ", i);
	rv = scanf("%lf", &n);
	if (rv != 1) {
	    scanf("%*s");
	}
    } while (rv != 1);
    return n;
}
