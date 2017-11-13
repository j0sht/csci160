/*
 * Write a program that asks the user to enter the number of miles traveled
 *  and the number of gallons of gasoline consumed. It should then calculate
 *  and display the miles-per-gallon value, showing one place to the right
 *  of the decimal. Next, using the fact that one gallon is about 3.785 L
 *  and one mile is about 1.609 KM, it should convert the miles-per-gallon
 *  value to a liters-per-100-km value, the usual European way of expressing
 *  fuel consumption, and display the result, showing one place to the right
 *  of the decimal.
 *
 * Use symbolic constants for the two conversion factors
 */
#include <cstdio>

const double L_PER_G = 3.785;
const double KM_PER_M = 1.609;

int main() {
    double miles, gallons;
    printf("Enter miles traveled: ");
    scanf("%lf", &miles);
    printf("Enter gallons of gas consumed: ");
    scanf("%lf", &gallons);

    double milesPerGallon = miles / gallons;
    printf("Miles per gallon: %.1lf\n", milesPerGallon);

    double liters = gallons * L_PER_G;
    double kms = miles * KM_PER_M;
    double hundredKMS = kms / 100.0;
    double litersPerHundredKMS = liters / hundredKMS;
    printf("Liters per 100 km: %.1lf\n", litersPerHundredKMS);

    return 0;
}
