/*
 * Write a program that converts time in minutes to time in hours and
 *  minutes.
 *
 * Use #define or const to create a symbolic constant for 60.
 *
 * Use a while loop to allow the user to enter values repeatedly and
 *  terminate the loop if a value for the time of 0 or less is entered.
 */
#include <cstdio>

const int MIN_PER_HR = 60; // minutes per hour

void getTimeInMinutes(int &t) {
    printf("Enter time in minutes (or 0 to quit): ");
    scanf("%d", &t);
}

int main() {
    int timeInMinutes;
    getTimeInMinutes(timeInMinutes);

    while (timeInMinutes > 0) {
	printf("\n%d minutes = %d hours, %d minutes.\n",
	       timeInMinutes, (timeInMinutes / MIN_PER_HR),
	       (timeInMinutes % MIN_PER_HR));
        getTimeInMinutes(timeInMinutes);
    }

    return 0;
}
