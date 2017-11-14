// shoes2.cpp -- calculates foot lengths for several sizes
#include <cstdio>

#define ADJUST 7.31

int main() {
    const double SCALE = 0.333;
    double shoe, foot;

    printf("Shoe size (men's)    foot length\n");
    shoe = 2.0;
    while (++shoe < 18.5) { // shoe is incremented, then compared
	foot = SCALE * shoe + ADJUST;
	printf("%10.1f %15.2f inches\n", shoe, foot);
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}
