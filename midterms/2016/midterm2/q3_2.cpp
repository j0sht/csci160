#include <cstdio>

/*
 * Rewrite function to use a do-while loop instead of recursion
 */

// ORIGINAL:
// Find the last array position containing the target value and
//  return it. Return -1 if the target is nowhere in the array
int findLast(float arr[], int currPos, float target) {
    if (currPos < 0) {
	return -1;
    } else if (arr[currPos] == target) {
	return currPos;
    } else {
	int result = findLast(arr, currPos-1, target);
	return result;
    }
}

// SOLUTION
int findLast2(float arr[], int currPos, float target) {
    do {
	if (arr[currPos] == target)
	    return currPos;
	currPos--;
    } while (currPos > -1);
    return -1;
}

const int SIZE = 5;

int main() {
    float a[SIZE] = {1,2,3,4,5};
    int last = findLast(a, SIZE-1, 3.0);
    printf("last = %d\n", last);
    last = findLast2(a, SIZE-1, 3.0);
    printf("last = %d\n", last);
    return 0;
}
