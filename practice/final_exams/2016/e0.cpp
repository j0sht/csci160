/*
 * Write a complete and correct C++ program that meets the following:
 *
 * The program prompts the user to enter two numbers, and attempts to read
 *  the first two user responses
 *
 * If the user entered two numbers, the program displays whichever number
 *  was closest to 100, otherwise the program displays the message
 *  "Incorrect data entered" and ends.
 */
#include <cstdio>

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    int val = scanf("%d %d", &n1, &n2);
    if (val == 2) {
	int closest = ((100-n1) < (100-n2)) ? n1 : n2;
	printf("%d is closest to 100.\n", closest);
    } else {
	printf("Incorrect data entered.\n");
    }

    return 0;
}
