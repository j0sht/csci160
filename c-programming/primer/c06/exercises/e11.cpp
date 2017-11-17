/*
 * Write a program that reads eight integers into an array and then prints
 *  them in reverse order.
 */
#include <cstdio>

const int SIZE = 8;

int main() {
    int nums[SIZE];
    for (int i = 0; i < SIZE; i++) {
	printf("Enter number %d: ",i+1);
	scanf("%d", &(nums[i]));
    }
    printf("In reverse: ");
    for (int i = SIZE-1; i >= 0; i--) {
	printf("%-2d", nums[i]);
    }
    printf("\nDone\n");

    return 0;
}
