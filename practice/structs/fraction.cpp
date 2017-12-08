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

// 3. Write a function that takes a Fraction as a parameter and displays
//    it in the form "%d/%d\n", with the numerator and denominator in
//    the respective parts. Have your main routine above call the function
//    once to display f1 and once more to display f2.
void displayFraction(Fraction f) {
    printf("%d/%d\n", f.numerator, f.denominator);
}

// 4. Write a function that takes a fraction as a pass-by-reference
//    parameter and prompts the user to supply values for the numerator
//    and denominator, then reads in the values the user supplies and
//    sets the Fraction fields appropriately
void setFraction(Fraction &f) {
    printf("Enter numerator: ");
    scanf("%d", &f.numerator);
    printf("Enter denominator: ");
    scanf("%d", &f.denominator);
}

// 2. Write a main routine in which you create two Fraction variables,
//    f1 and f2, and set appropriate values in the variable fields so that
//    f1 represents 3/7 and f2 represents 112/113
int main() {
    Fraction f1, f2;

    // 5. Re-write your main routine to call the function on f1 and f2
    //    to set their values instead of the initialization you used
    //    in step 2 above.
    setFraction(f1);
    setFraction(f2);

    // 3
    displayFraction(f1);
    displayFraction(f2);

    return 0;
}
