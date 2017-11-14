/*
 * Write a program that asks the use to enter the number of days and then
 *  converts that value to weeks and days. For example, it would convert
 *  18 days to 2 weeks, 4 days.
 *
 * Display the results in the following format:
 *
 *  18 days are 2 weeks, 4 days.
 *
 * Use a while loop to allow the user to repeatedly enter day values;
 *  terminate the loop when the user enters a nonpositive value.
 */
#include <cstdio>

const int DAYS_PER_WK = 7;

int getDays() {
    int days;
    printf("Enter days (or 0 to quit): ");
    scanf("%d", &days);
    return days;
}

int main() {
    int days = getDays();
    while (days > 0) {
	printf("\n%d days are %d weeks, %d days.\n\n",
	       days, days / DAYS_PER_WK, days % DAYS_PER_WK);
	days = getDays();
    }
    return 0;
}
