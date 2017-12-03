/*
 * Joshua Tate
 * Lab 10 Exercise
 *
 * This program allows the user to choose an array size, allocates an
 *  array of doubles of the provided size, fills the array with user entered
 *  data, and displays the contents of the array before deallocating it and
 *  ending the program.
 */
#include <cstdio>

// Maximum/minimum array sizes
const int MaxSize = 25000;
const int MinSize = 1;

// Displays the program intro and overview
void welcome();

// Gets the user to select an array size (from 1..MaxSize), allocates
//  an array of that size, records the size in the given argument, and
//  returns a pointer to the array
double* allocate(int &size);

// Fills the given array with user-supplied values
void fill(double arr[], int size);

// Displays the current array contents, one element per line
void print(double arr[], int size);

int main() {
    // arrSize holds the user entered array size
    int arrSize = 0;

    // display welcome message and explain purpose of the program
    welcome();

    // array holds a pointer to an array of doubles returned by allocate
    //  allocate stores the user entered size in arrSize
    double *array = allocate(arrSize);

    // inform user that allocation was successful, proceed to initialize
    //  the arrays contents
    printf("\nAllocation successful, initializing contents\n");

    // pass array to fill to initialize array contents
    fill(array, arrSize);

    // inform user that initialization is complete, proceed to print
    //  the arrays contents
    printf("\nInitializing complete, array contents are as follows:\n");

    // pass array to print to print the arrays contents
    print(array, arrSize);

    // inform user that the array is being disallocated
    printf("\nDeallocating array\n");

    // deallocate the array with delete []
    delete [] array;

    // exit the program
    return 0;
}

void welcome() {
    // display welcome message and explain purpose of the program
    printf("Welcome to the dynamic array allocator program.\n"
	   "This program allows you to enter an array size, and allows "
	   "you to fill an array of doubles with your provided size.\n\n");
}

double *allocate(int &size) {
    // arr holds a pointer to allocated array
    //  initial value is NULL to signify that it has not been allocated
    double *arr = NULL;

    // numberEntered and inRange booleans are used to represent whether
    //  the user has entered a number and that it is in proper range
    bool numberEntered, inRange;
    numberEntered = inRange = false;

    // repeat while arr is NULL, and user has not entered a
    //  number that is in range MinSize..MaxSize
    do {
	// prompt user to enter a number in range MinSize..MaxSize
	printf("Please enter your desired desired array size as an "
	       "integer in the range %d..%d:\n", MinSize, MaxSize);

	// store scanf return val in vals read
	int valsRead = scanf("%d", &size);

	// numberEntered is true if valsRead is 1
	numberEntered = (valsRead == 1);

	// check if user did not enter a number
	if (!numberEntered) {
	    // display error message informing user that number
	    //  is required
	    printf("ERROR: Not an integer! Try again.\n");

	    // clear the input buffer
	    scanf("%*s");

	    // continue to next iteration of loop
	    continue;
	}

	// inRange is true if user entered size is in range
	//  MinSize..MaxSize
        inRange = ((size >= MinSize) && (size <= MaxSize));

	// check if user entered size is not in range
	if (!inRange) {

	    // display error message informing user their size
	    //  is not in the proper range
	    printf("ERROR: %d is out of range! Try again.\n", size);

	    // continue to next iteration of loop
	    continue;
	}

	// try to allocate the array
	arr = new double[size];

	// it might fail (out of memory), check if NULL
	if (arr == NULL) {
	    // inform user that the program was unable to allocate an
	    //  array of their size, get a new number
	    printf("Sorry, we are unable to allocate an array of that "
		   "size, please try again\n");
	}
    } while (arr == NULL || !numberEntered || !inRange);

    // return pointer to allocated array
    return arr;
}

void fill(double arr[], int size) {
    // num represents the user entered number
    double num;

    // get number for each position in the array
    for (int i = 0; i < size; i++) {

	// val holds the value returned by scanf
	int val;

	// repeat while user does not enter a number
	do {
	    // prompt user to enter a number
	    printf("Please enter a value for element %d: ", i);
	    val = scanf("%lf", &num);

	    // check if user did not enter a number
	    if (val != 1) {

		// display error message
		printf("ERROR: Not a number! Try again.\n");

		// clear input buffer
		scanf("%*s");
	    }
	} while (val != 1);

	// assign number to position i of arr
	arr[i] = num;
    }
}

void print(double arr[], int size) {
    // print each element in the array
    for (int i = 0; i < size; i++)
	printf("Array element %d: %lf\n", i, arr[i]);
}
