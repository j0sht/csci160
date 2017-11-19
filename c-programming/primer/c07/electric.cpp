// electric.cpp -- calculates electric bill
#include <cstdio>

#define RATE1 0.13230 // Rate for first 360 kwh
#define RATE2 0.15040 // Rate for the next 108 kwh
#define RATE3 0.30025 // Rate for the next 252 kwh
#define RATE4 0.34025 // Rate for over 720 kwh

#define BREAK1 360.0 // First breakpoint for rates
#define BREAK2 468.0 // Second breakpoint for rates
#define BREAK3 720.0 // Third breakpoint for rates

#define BASE1 (RATE1 * BREAK1) // Cost for 360 kwh
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1))) // Cost for 468 kwh
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2))) // Cost for 720

int main() {
    double kwh; // kilowatt-hours used
    double bill; // charges

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh); // %lf for type double
    if (kwh <= BREAK1)
	bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
	bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else if (kwh <= BREAK3)
	bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else
	bill = BASE3 + (RATE4 * (kwh - BREAK3));
    printf("The charge for %.lf kwh is $%1.2lf.\n", kwh, bill);

    return 0;
}
