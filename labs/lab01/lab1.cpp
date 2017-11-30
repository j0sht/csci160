// Joshua Tate
// Lab 1 Exercise
//
// This program computes and displays square root of a user entered value
#include <cstdio>
#include <cmath>

int main()
{
    // Print welcome message to user, and explain programs purpose
    printf("Welcome to the square root program.\n");
    printf("You will be asked to enter a numeric value, and the program ");
    printf("will then compute and display its square root.\n");

    // Declare a variable to hold user's input data
    // and one to hold the calculated result, each of type double
    double userValue, result;

    // Prompt the user for a numeric value, read it into userValue
    printf("Please enter a numeric value, e.g. 27.5\n");
    scanf("%lf", &userValue);

    // Call the sqrt function to compute user's value, store in result
    result = sqrt(userValue);

    // Display both the original value and the computed square root
    // Show two digits after the decimal point for each value
    // Explain to the user what each value represents, then exit
    printf("The square root of %.2lf is %.2lf\n", userValue, result);
    return 0;
}
