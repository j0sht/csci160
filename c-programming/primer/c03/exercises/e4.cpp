/*
 * Write a program that reads in a floating-point number and prints it
 *  first in decimal-point notation, then in exponential notation, and then,
 *  if your system supports it, p notation.
 */
#include <cstdio>

int main() {
    double val;
    printf("Enter a floating-point value: ");
    scanf("%lf", &val);
    printf("fixed-point notation: %lf\n", val);
    printf("exponential notation: %e\n", val);
    printf("p notation: %a\n", val);

    return 0;
}
