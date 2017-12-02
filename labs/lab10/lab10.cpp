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

// MaxSize represents the maximum allowable size a user can enter
const int MaxSize = 25000;

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
    int arrSize = 0;
    welcome();
    double *array = allocate(arrSize);
    printf("\nAllocation successful, initializing contents\n");
    fill(array, arrSize);
    printf("\nInitializing complete, array contents are as follows:\n");
    print(array, arrSize);
    printf("\nDeallocating array\n");
    delete [] array;

    return 0;
}

void welcome() {
    printf("Welcome to the dynamic array allocator program.\n"
	   "This program allows you to enter an array size, and allows "
	   "you to fill an array of doubles with your provided size.\n\n");
}

double *allocate(int &size) {
    double *arr = NULL;
    bool numberEntered, inRange;
    numberEntered = inRange = false;

    do {
	printf("Please enter your desired desired array size as an "
	       "integer in the range 1..%d:\n", MaxSize);
	int valsRead = scanf("%d", &size);
	numberEntered = (valsRead == 1);
	if (!numberEntered) {
	    printf("ERROR: Not an integer! Try again.\n");
	    scanf("%*s");
	    continue;
	}
        inRange = ((size >= 0) && (size <= MaxSize));
	if (!inRange) {
	    printf("ERROR: %d is out of range! Try again.\n", size);
	    continue;
	}
	// try to allocate the array
	arr = new double[size];
	// it might fail (out of memory), check if NULL
	if (arr == NULL) {
	    printf("Sorry, we are unable to allocate an array of that "
		   "size, please try again\n");
	}
    } while (arr == NULL || !numberEntered || !inRange);

    return arr;
}

void fill(double arr[], int size) {
    double num;
    for (int i = 0; i < size; i++) {
	int val;
	do {
	    printf("Please enter a value for element %d: ", i);
	    val = scanf("%lf", &num);
	    if (val != 1) {
		printf("ERROR: Not a number! Try again.\n");
		scanf("%*s");
	    }
	} while (val != 1);
	arr[i] = num;
    }
}

void print(double arr[], int size) {
    for (int i = 0; i < size; i++)
	printf("Array element %d: %lf\n", i, arr[i]);
}
