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
    // 6. Create an array of 5 Fractions in your main routine, and use a
    //    for loop to call your function from step 5 to initialize each
    //    of them. Once all 5 array elements have been initialized, use
    //    a second for loop to call your other function to print each
    //    of them.
    const int size = 5;
    Fraction fractions[size];
    for (int i = 0; i < size; i++) {
	printf("For fraction #%d:\n", i+1);
	setFraction(fractions[i]);
    }
    for (int i = 0; i < size; i++) {
	printf("Fraction #%d: ", i+1);
	displayFraction(fractions[i]);
    }
    return 0;
}
