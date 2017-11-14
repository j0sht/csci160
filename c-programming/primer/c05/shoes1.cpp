// shoes1.cpp -- converts a shoe size to inches
#include <cstdio>

const double ADJUST = 7.31;
const double SCALE = 0.333;

int main() {
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)    foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}
