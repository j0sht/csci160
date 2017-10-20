// Joshua Tate
// Lab 6 Exercise
//
// This program will ask the user to enter a number in a valid range
//  which will represent the size of an array. The program will then
//  initialize an array of the given size, and display the elements,
//  rotating them all, while displaying their rotated position
//  until the elements are back to their original place.
#include <cstdio>

// MinSize represents the minimum supported array size
const int MinSize = 1;
// MaxSize represents the maximum supported array size
const int MaxSize = 20;

// welcome() displays an appropriate welcome message explaining
//  the usage and purpose of the program
void welcome();

// pickSize(int min, int max) prompts the user to enter a number between
//  min..max, repeatedly asking until valid input is given
int pickSize(int min, int max);

// initialize(int arr[], int size) initializes values of arr[] up to size
void initialize(int arr[], int size);

// display(int arr[], int size) prints elements of array up to size
void display(int arr[], int size);

// rotate(int arr[], int size) rotates elements of an array such that
//  arr[0] becomes arr[1]...arr[size-1] becomes arr[0]
void rotate(int arr[], int size);

/* MAIN */
int main() {
    // Array to be rotated
    int dataArray[MaxSize];
    // Introduce the program to the user
    welcome();
    // Let the user pick how much of the array will be used
    int sizeUsed = pickSize(MinSize, MaxSize);
    printf("\n");
    // Initialize the contents in use
    initialize(dataArray, sizeUsed);
    // Display the initial content
    display(dataArray, sizeUsed);
    // Repeatedly rotate and display the contents
    //  until we are back to the original layout
    for (int i = 0; i < sizeUsed; i++) {
	rotate(dataArray, sizeUsed);
	display(dataArray, sizeUsed);
    }
    // End the program
    return 0;
}
/* END MAIN */

void welcome() {
    // Explain the purpose of the program
    printf("Welcome to the array rotation program\n\n");
    printf("This program will initialize an array and then\n");
    printf("repeatedly rotate its contents\n\n");
}

int pickSize(int min, int max) {
    // size represents the user's desired size for the array
    // size cannot be less than min or more than max
    int size;
    // userInputIsValid represents whether or not the user has entered
    //  valid input. It's initial value is false
    bool userInputIsValid = false;
    do {
	// Prompt the user to enter a size between min and max
	printf("Please select an array size in the range ");
	printf("%d..%d\n", min, max);
	// scanfVal is used to determine if the user entered data of
	//  proper type
	int scanfVal = scanf("%d", &size);
	if (scanfVal == 0) {
	    // If scanfVal is equal to 0, user did not enter in an int
	    // Set userInputIsValid to false
	    userInputIsValid = false;
	    // Explain to user that they did not enter an integer
	    //  ask them to try again
	    printf("That was not an integer, please try again.\n");
	    // Clear the input buffer
	    scanf("%*s");
	} else if (size < min) {
	    // If size is less than min, set userInputIsValid to false
	    userInputIsValid = false;
	    // Explain to user that the value they entered is too small,
	    //  ask them to try again
	    printf("%d is too small, please try again.\n", size);
	} else if (size > max) {
	    // If size is greater than max, set userInputIsValid to false
	    userInputIsValid = false;
	    // Explain to user that the value they entered is too big,
	    //  ask them to try again
	    printf("%d is too large, please try again.\n", size);
	} else {
	    // User input is valid, set the flag to true
	    userInputIsValid = true;
	}
    } while (!userInputIsValid); // Repeat loop until userInputIsValid is true
    // Return the users input
    return size;
}

void initialize(int arr[], int size) {
    // Set the values of arr to their index position,
    //  i.e. arr[0] = 0, arr[1] = 1, ..., arr[size-1] = size-1
    for (int i = 0; i < size; i++) {
	arr[i] = i;
    }
}

void display(int arr[], int size) {
    // Display the values of the array up to size
    for (int i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    // Print new line before exiting function
    printf("\n");
}

void rotate(int arr[], int size) {
    // Grab the value at arr[0], assign it to firstElement
    int firstElement = arr[0];
    // Loop through elements of array up to size
    for (int i = 0; i < size; i++) {
	// If i+1 is equal to size, end of initialized values has been reached
	if (i+1 == size) {
	    // Set the last initialized element to the firstElement
	    arr[i] = firstElement;
	} else {
	    // Grab the next initialized value, assign it to nextElement
	    int nextElement = arr[i+1];
	    // Assign value at current index to nextElement
	    arr[i] = nextElement;
	}
    }
}
