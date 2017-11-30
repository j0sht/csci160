// Joshua Tate
// Lab 7 Exercise
//
// This program takes two words as command line arguments, and converts
//  the first argument to all uppercase and the second to all lowercase.
// The program then prints the original arguments and the converted
//  counterparts.
#include <cstdio>
#include <cctype>  // provides toupper and tolower functions
#include <cstring>

// ExpectedArgCount represents the number of expected command line
//  arguments
const int ExpectedArgCount = 3;

// MaxLen represents the maximum accepted string length
const int MaxLen = 64;

// Displays a welcome message explaining usage and purpose of program
void welcome();

// Converts a null-terminated text string to uppercase
void convertToUpper(char str[]);

// Converts a null-terminated text string to lowercase
void convertToLower(char str[]);

/* MAIN */
int main(int argc, char *argv[]) {
    // Display welcome message
    welcome();
    // Check if three arguments were given
    if (argc == ExpectedArgCount) {
	// Correct number of arguments were given
	// Declare two character arrays to hold on to copies of
	//  command line arguments
	char firstWord[MaxLen];
	char secondWord[MaxLen];
	// Copy command line argument 2 and 3 into firstWord
	//  and second word, respectively
	strncpy(firstWord, argv[1], MaxLen);
	strncpy(secondWord, argv[2], MaxLen);
	// Print the original arguments
	printf("Your original arguments were\n");
	printf("   \"%s %s\"\n", firstWord, secondWord);
	// Convert first argument to upper case
	convertToUpper(firstWord);
	// Convert second argument to lower case
	convertToLower(secondWord);
	// Print the converted arguments
	printf("and the converted versions are\n");
	printf("   \"%s %s\"\n", firstWord, secondWord);
    } else {
	// Incorrect number of arguments were given, print error
	//  message and exit program.
	printf("An incorrect number of command line arguments were ");
	printf("provided: exactly two words are expected.\n");
    }
    return 0;
}
/* END MAIN */

void welcome() {
    // Print welcome message and explain purpose of the program
    printf("Welcome to the word converter!\n\n");
    printf("This program accepts two command line arguments,\n");
    printf("converting the first to uppercase and the second ");
    printf("to lowercase.\n\n");
}

void convertToUpper(char str[]) {
    // Convert each character in the array to an uppercase character
    for (int i = 0; str[i] != '\0'; i++)
	str[i] = toupper(str[i]);
}

void convertToLower(char str[]) {
    // Convert each character in the array to a lowercase character
    for (int i = 0; str[i] != '\0'; i++)
	str[i] = tolower(str[i]);
}
