#include <cstdio>

/*
 * Rewrite function to use a while loop instead of a for loop
 */

// ORIGINAL
void reverse(long data[], int size) {
    // work from the ends to the middle of the array,
    // swapping the characters in the two opposing positions
    int midpoint = size/2;
    for (int p = 0; p < midpoint; p++) {
	int opposite = size - (1 + p);
	int oldP = data[p];
	data[p] = data[opposite];
	data[opposite] = oldP;
    }
}

// SOLUTION
void reverseWithWhile(long data[], int size) {
    int i = 0;
    while (i < (size/2)) {
	long oldVal = data[i];
	int end = (size-1) - i;
	data[i] = data[end];
	data[end] = oldVal;
	i++;
    }
}

const int SIZE = 7;

int main() {
    long a[SIZE] = {1,2,3,4,5,6,7};
    printf("Original contents of a: ");
    for (int i = 0; i < SIZE; i++)
	printf("%ld, ", a[i]);
    printf("\n");
    reverse(a, SIZE);
    printf("After calling reverse: ");
    for (int i = 0; i < SIZE; i++)
	printf("%ld, ", a[i]);
    printf("\n");
    reverseWithWhile(a, SIZE);
    printf("After calling reverseWithWhile: ");
    for (int i = 0; i < SIZE; i++)
	printf("%ld, ", a[i]);
    printf("\n");
    return 0;
}
