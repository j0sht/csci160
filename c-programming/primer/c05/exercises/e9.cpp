/*
 * Write a program that requests the user to enter a Fahrenheit temperature.
 *
 * The program should read the temperature as a type double number and
 *  pass it as an argument to a user-supplied function called Temperatures().
 *
 * This function should calculate the Celsius equivalent and the Kelvin
 *  equivalent and display all three temperatures with a precision of
 *  two places to the right of the decimal. It should identify each
 *  value with the temperature scale it represents.
 *
 * The Temperatures() function should use const to create symbolic
 *  representations of the three constants that appear in the conversions.
 *
 * The main() function should use a loop to allow the user to enter
 *  temperatures repeatedly, stopping when a q or other nonnumeric value
 *  is entered.
 *
 * Use the fact that scanf() returns the number of items read, so it will
 *  return 1 if it reads a number, but it won't return 1 if the user
 *  enters q. The == operator tests for equality, so you can use it to
 *  compare the return value of scanf() with 1.
 */
#include <cstdio>

void Temperatures(double f) {
    const double C_CONST_1 = (5.0 / 9.0);
    const double C_CONST_2 = 32.0;
    const double K_CONST = 273.16;
    double c = C_CONST_1 * (f - C_CONST_2);
    double k = c + K_CONST;
    printf("******************\n");
    printf("Fahrenheit: %5.2lf\n", f);
    printf("Celsius:    %5.2lf\n", c);
    printf("Kelvin:     %5.2lf\n", k);
    printf("******************\n");
}

bool getFahr(double &f) {
    printf("Enter a temperature in fahrenheit (or 'q' to quit): ");
    return (scanf("%lf", &f) == 1);
}

int main() {
    double f;
    while (getFahr(f)) {
	Temperatures(f);
    }
    printf("=======\n");
    printf("Goodbye\n");
    printf("=======\n");
    return 0;
}
