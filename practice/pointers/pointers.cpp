#include <cstdio>
#include <cstdlib>

int main() {
    // Write a complete program that:
    // 1. Declares a float* variable to store an array address
    float *fs;

    // 2. Declares an int variable to store the size of the array
    int size;

    // 3. Asks the user what array size they want and reads
    //    the size they enter
    printf("Enter array size: ");
    scanf("%d", &size);

    // 4. Allocates an array of that many floats
    fs = new float[size];

    // 5. Checks that the allocation succeeded, ending the program
    //    if it did not succeed
    if (fs == NULL) {
	printf("ERROR: Could not allocate array of size %d\n", size);
	exit(1);
    }

    // 6. Prompts the user to enter the specified number of values and
    //    stores them in the array.
    for (int i = 0; i < size; i++) {
	printf("Enter value for index %d: ", i);
	scanf("%f", &(fs[i]));
    }

    // 7. Prints the array contents
    for (int i = 0; i < size; i++)
	printf("%d = %g\n", i, fs[i]);

    // 8. Deletes the array
    delete [] fs;

    return 0;
}
