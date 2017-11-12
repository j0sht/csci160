/*
 * The mass of a single molecule of water is about 3.0 x 10^-23 grams.
 * A quart of water is about 950 grams.
 *
 * Write a program that requests an amount of water, in quarts, and displays
 *  the number of water molecules in that amount.
 */
#include <cstdio>

const double MOLECULE_MASS = 3.0e-23;

int main() {
    double waterInQuarts;
    printf("Enter amount of water, in quarts: ");
    scanf("%lf", &waterInQuarts);
    printf("%.2lf of water in quarts is ", waterInQuarts);
    printf("%g of water molecules in grams\n",
	   waterInQuarts * MOLECULE_MASS);

    return 0;
}
