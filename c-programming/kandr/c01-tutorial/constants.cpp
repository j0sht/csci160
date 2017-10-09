#include <cstdio>

// You can use #define, which is a preprocesser directive
//  (searches and replaces name for the value in your source
//  code before running through the compiler)
// #define LOWER 0   // lower limit of table
// #define UPPER 300 // upper limit
// #define STEP 20   // step size

// Using const in C++ is preferable because type errors
// will be caught at compile time.
// There is no noticable difference in performance between
//  #define macros and const's

// NOTE: You need semicolons for constants, but not #define
const int LOWER = 0;
const int UPPER = 300;
const int STEP = 20;

// Print Fahrenheit-Celsius table
int main() {
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}
