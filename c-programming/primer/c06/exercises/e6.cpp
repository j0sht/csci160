/*
 * Write a program that prints a table with each line giving an integer,
 *  its square and its cube.
 *
 * Ask the user to input the lower and upper limits for the table.
 *
 * Use a for loop.
 */
#include <cstdio>

int getNumberWithPrompt(const char *s);

int main() {
    int lower = getNumberWithPrompt("Enter lower limit: ");
    int upper = getNumberWithPrompt("Enter upper limit: ");

    printf("\n%-5s %-10s %-15s\n", "n", "square", "cube");
    printf("%-5s %-10s %-15s\n", "--", "-------", "-----");
    for (int i = lower; i <= upper; i++)
	printf("%-5d %-10d %-15d\n", i, i*i, i*i*i);

    return 0;
}

int getNumberWithPrompt(const char *s) {
    int n;
    printf("%s", s);
    scanf("%d", &n);
    return n;
}
