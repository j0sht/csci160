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
#include <cmath>

int main() {
    double n1, n2;
    printf("Enter two numbers: ");
    int val = scanf("%lf %lf", &n1, &n2);
    if (val == 2) {
        double closest = (abs(100.0-n1) < abs(100.0-n2)) ? n1 : n2;
	printf("%g is closest to 100.\n", closest);
    } else {
	printf("Incorrect data entered.\n");
    }

    return 0;
}
