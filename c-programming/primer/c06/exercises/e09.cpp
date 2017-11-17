/*
 * Modify exercise 8 so that it uses a function to return the value of
 *  the calculation.
 */
#include <cstdio>

double differenceDividedByProduct(double x, double y);

int main() {
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    double result = differenceDividedByProduct(x, y);
    printf("Difference / Product = %g\n", result);

    return 0;
}

double differenceDividedByProduct(double x, double y) {
    double difference = x - y;
    double product = x * y;
    return difference/product;
}
