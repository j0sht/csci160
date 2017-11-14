/*
 * Write a program that requests a type double number and prints the
 *  value of the number cubed.
 *
 * Use a function of your own design to cube the value and print it.
 *
 * The main() program should pass the entered value to this function.
 */
#include <cstdio>

void cubeAndPrint(double n) {
    double nCubed = n * n * n;
    printf("%g cubed = %g\n", n, nCubed);
}

int main() {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    cubeAndPrint(n);
    return 0;
}
