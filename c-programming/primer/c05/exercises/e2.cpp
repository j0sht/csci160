/*
 * Write a program that asks for an integer and then prints all the integers
 *  from (and including) that value up to (and including) a value larger
 *  by 10. (That is, if the input is 5, the output runs from 5 to 15.)
 *
 * Be sure to seperate each output value by a space or tab or newline.
 */
#include <cstdio>

int main() {
    int userNum;

    printf("Enter number: ");
    scanf("%d", &userNum);

    int max = userNum + 10;
    userNum--;
    while (userNum++ < max) {
	printf("%d ", userNum);
    }
    printf("\n");

    return 0;
}
