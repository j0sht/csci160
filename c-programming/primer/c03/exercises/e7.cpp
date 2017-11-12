/*
 * There are 2.54 centimeters to the inch.
 *
 * Write a program that asks your to enter your height in inches and then
 *  displays your height in centimeters. Or, if you prefer, ask for the
 *  height in centimeters and convert that to inches.
 */
#include <cstdio>

const double CM_PER_IN = 2.56;

int main() {
    double heightInInches;
    printf("Enter your height in inches: ");
    scanf("%lf", &heightInInches);
    printf("Your height is %.2lf cm\n", heightInInches * CM_PER_IN);

    return 0;
}
