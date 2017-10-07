#include <cstdio>

/*
   print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300
*/
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -50; /* lower limit of temperature table */
    upper = 50; /* upper limit */
    step = 5; /* step size */
    celsius = lower;

    printf("  C      F\n");
    printf("--- ------\n");
    while (celsius <= upper) {
	fahr = (9.0/5.0) * celsius + 32;
	printf("%3.0f %6.1f\n", celsius, fahr);
	celsius = celsius + step;
    }
    return 0;
}
