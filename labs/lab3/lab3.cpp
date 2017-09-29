// Joshua Tate
// Lab 3 Exercise
//
// This program asks the user to enter 2 integers,
//  then determines how many times the second goes
//  into the first and what the remainder is aftewords.
//
// The program ensures that the user enters two integers,
//  and that the denominator is not 0.
//
// In the event of an error, a message is displayed,
//  and the program exits.
#include <cstdio>

// void welcome() prints a welcome message to the user
//  and explains the purpose of the program.
void welcome();

// bool getTwoInts(int &numerator, int &denominator)
//  asks the user for two integer values.
// The numbers are then stored in numerator and denominator,
//  respectively.
// If the user does not enter an integer for one or both,
//  the function returns false, otherwise it returns true.
bool getTwoInts(int &numerator, int &denominator);

// void printDivision(int numerator, int denominator)
//  prints the division of numerator/denominator, and
//  the remainder of the division.
// If the denominator is equal to 0, printDivision
//  will not perform the division and let the user know
//  that they cannot divide by 0.
void printDivision(int numerator, int denominator);

/* MAIN */
int main() {
    // Display welcome message to user, and explain purpose of program.
    welcome();
    // Create to integer variables to represent the numerator and
    //  denominator that user will enter.
    int numerator, denominator;
    // Get numerator and denominator from the user, store in a bool
    //  variable to check if input was valid.
    bool twoInts = getTwoInts(numerator, denominator);
    if (twoInts) {
	// If user input is valid, print the result of the division
	//  and the remainder of the division.
	printDivision(numerator, denominator);
    } else {
	// If the user did not enter valid input, tell the user the input
	//  was invalid.
	printf("Sorry, you did not enter two integers.\n");
    }
    // Exit the program
    return 0;
}
/* END MAIN */

void welcome() {
    // Display welcome message and explain purpose of program.
    printf("Welcome to the division program\n\n");
    printf("This program allows you to enter two integers,\n");
    printf("   determines how many times the second integer ");
    printf("goes into the first,\n   and how much is left ");
    printf("afterwards.\n\n");
}

bool getTwoInts(int &numerator, int &denominator) {
    // Ask the user for two integer values
    printf("Please enter the numerator and denominator as integers, ");
    printf("e.g. 23 5\n");
    // Store the values in numerator and denominator.
    // Hold on to return value of scanf indicating successful scan.
    int scanfVal = scanf("%d %d", &numerator, &denominator);
    if (scanfVal) {
	// If the scan was successful, return true.
	return true;
    } else {
	// If the scan was unsuccessful, return false.
	return false;
    }
}

void printDivision(int numerator, int denominator) {
    // Check if denominator is 0.
    if (denominator == 0) {
	// If denomintor is 0, print message to user indicating
	//  that it is not possible to divide by 0.
	printf("Sorry, I cannot divide by 0.\n");
	// Exit the function.
	return;
    }
    // Create variable to hold on to result of dividing the numerator
    //  by the denominator.
    int division = numerator / denominator;
    // Create variable to hold on to result of remainder from dividing
    //  the numerator by the denominator.
    int remainder = numerator % denominator;
    // Display message to user describing result of division and remainder
    printf("%d goes into %d a total number of %d times, ",
	   denominator, numerator, division);
    printf("with a remainder of %d.\n", remainder);
}
