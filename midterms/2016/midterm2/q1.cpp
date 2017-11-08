// Write a program that asks the user to enter one thousand numeric
//  values, reads them in, and stores them in an array. (No error
//  checking is necessary)
// After all the values hae been read and stored, the program asks the user
//  to enter a maximum value, and reads that value (no error checking)
// Program then goes through the original 1000 values, and prints (one
//  per line) all the values that are less than the maximum value
//  entered in step 2.
#include <cstdio>

const int SIZE = 10; // Change to 1000 for correct program

int main() {
    int array[SIZE];
    // Step 1
    for (int i = 0; i < SIZE; i++) {
	printf("Please enter number %d: ", i+1);
	scanf("%d", &(array[i]));
    }
    // Step 2
    int maxVal;
    printf("Enter a maximum value: ");
    scanf("%d", &maxVal);
    // Step 3
    for (int i = 0; i < SIZE; i++) {
	if (array[i] < maxVal) {
	    printf("%d\n", array[i]);
	}
    }
    return 0;
}
