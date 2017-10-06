// Joshua Tate
// Lab 3 Exercise
//
// This program asks the user to enter a number in the range 1..10
// If the user enters an invalid value, the program will repeatedly ask
//  the user for an appropriate value until one is given.
#include <cstdio>

// welcome() displays an appropriate welcome message to the user,
//  and explains the purpose of the program.
void welcome();

// getInRange(float minVal, float maxVal) asks the user for a value in the
//  range minVal..maxVal.
// minVal represents the smalled valid value, and
// maxVal represents the largest valid value
// getInRange will repeatedly prompt the user for a valid value until
//  on is given.
float getInRange(float minVal, float maxVal);

/* MAIN */
int main() {
    // display welcome message and explain purpose of program
    welcome();
    // get value in range 1..10
    float value = getInRange(1,10);
    // Thank user for proper input
    printf("Thank you for providing value %g\n", value);
    // Exit program
    return 0;
}
/* END MAIN */

void welcome() {
    // Display welcome message and explain purpose and usage of program
    printf("In this program you will simply be asked to enter a number ");
    printf("in the range 1..10.\nIf you supply an invalid value the ");
    printf("program will tell you what you have done wrong,\n    ");
    printf("and ask you to try again.\nThis cycle will continue until you ");
    printf("provide a valid response.\n\n");
}

float getInRange(float minVal, float maxVal) {
    // userVal represents the users input
    float userVal;
    // prompt the user for a value in range minVal..maxVal
    printf("Please enter a number in the range %g to %g\n",
	   minVal, maxVal);
    // Store scanf's return value in scanfVal to check for successful scan
    int scanfVal = scanf("%f", &userVal);
    if (!scanfVal) {
	// If the user did not enter a valid number, tell them so
	printf("That was not a valid number, please try again\n");
	// Clear the buffer of invalid input
	scanf("%*s");
	// Prompt the user again for a valid value
	userVal = getInRange(minVal, maxVal);
    } else {
	if (userVal < minVal) {
	    // If userVal is less than minVal, tell user the value is
	    //  too small. Ask them to try again.
	    printf("Error: the value %g is too small, please try again\n",
		   userVal);
	    userVal = getInRange(minVal, maxVal);
	} else if (userVal > maxVal) {
	    // If userVal is greater than maxVal, tell the user the value is
	    //  too large. Ask them to try again.
	    printf("Error: the value %g is too large, please try again\n",
		   userVal);
	    userVal = getInRange(minVal, maxVal);
	}
    }
    return userVal;
}
