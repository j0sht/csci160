// floaterr.cpp -- demonstrates round-off error
#include <cstdio>

int main() {
    float a, b;
    // Take a number, add 1 to it
    b = 2.0e20 + 1.0;
    // Subtract the original number
    a = b - 2.0e20;
    // Should get the same answer...
    // Floats could give another answer
    printf("%f\n", a);

    return 0;
}
