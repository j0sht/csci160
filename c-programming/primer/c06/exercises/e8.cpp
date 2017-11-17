/*
 * Write a program that requests two floating-point numbers and prints the
 *  value of their difference divided by their product.
 *
 * Have the program loop through pairs of input values until the user enters
 *  nonnumeric input
 */
#include <cstdio>

int main() {
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    double difference = x - y;
    double product = x * y;
    printf("Difference / Product = %g\n", difference/product);

    return 0;
}
