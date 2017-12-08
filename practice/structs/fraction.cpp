/*
 * Suppose we decide to use a struct to represent a fraction, with one
 *  (integer) field holding the denominator and another (also an integer)
 *  holding the numerator.
 */
#include <cstdio>

// 1. Write a definition for this new Fraction data type
struct Fraction {
    int numerator, denominator;
};

// 2. Write a main routine in which you create two Fraction variables,
//    f1 and f2, and set appropriate values in the variable fields so that
//    f1 represents 3/7 and f2 represents 112/113
int main() {
    Fraction f1, f2;
    f1.numerator = 3;
    f1.denominator = 7;
    f2.numerator = 112;
    f2.denominator = 113;
    printf("f1: %d/%d\n", f1.numerator, f1.denominator);
    printf("f2: %d/%d\n", f2.numerator, f2.denominator);

    return 0;
}
