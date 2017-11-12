/*
 * In the U.S. system of volume measurements, a pint is 2 cups, a cup is
 *  8 ounces, an ounce is 2 tablespoons, and a tablespoon is 3 teaspoons.
 *
 * Write a program that requests a volume in cups and that displays the
 *  equivalent volumes in pints, ounces, tablespoons, and teaspoons.
 *
 * Why does a floating-point type make more sense for this application
 *  than an integer type.
 */
#include <cstdio>

const double CUPS_PER_PINT = 2;  // cups per pint
const double OUNCES_PER_CUP = 8; // ounces per cup
const double TBLS_PER_OUNCE = 2; // tablespoons per ounce
const double TS_PER_TBLS = 3;    // teaspoons per tablespoon

int main() {
    double cups;
    printf("Enter a volume in cups: ");
    scanf("%lf", &cups);

    double pints = cups / CUPS_PER_PINT;
    double ounces = cups * OUNCES_PER_CUP;
    double tablespoons = ounces * TBLS_PER_OUNCE;
    double teaspoons = tablespoons * TS_PER_TBLS;

    printf("Volume in pints: %.1lf\n", pints);
    printf("Volume in ounces: %.1lf\n", ounces);
    printf("Volume in tablespoons: %.1lf\n", tablespoons);
    printf("Volume in teaspoons: %.1lf\n", teaspoons);

    return 0;
}
