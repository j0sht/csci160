/*
 * There are approximately 3.156 * 10^7 seconds in a year.
 *
 * Write a program that requests your age in years and then displays the
 *  equivalent number of seconds
 */
#include <cstdio>

const double SECONDS_IN_YEARS = 3.156e7;

int main() {
    double age;
    printf("Enter your age: ");
    scanf("%lf", &age);
    printf("Age in years: %g\n", age);
    printf("Age in seconds: %.1lf\n", age * SECONDS_IN_YEARS);
    return 0;
}
