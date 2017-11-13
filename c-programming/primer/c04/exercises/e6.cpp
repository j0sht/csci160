/*
 * Write a program that requests the user's first name and then the
 *  user's last name. Have it print the entered names on one line and the
 *  number of letters in each name on the following line. Align each letter
 *  count with the end of the corresponding name, as in the following:
 *
 * Melissa Honeybee
 *       7        8
 *
 * Next, have it print the same information, but with the counts aligned
 *  at the beginning of each name.
 *
 * Melissa Honeybee
 * 7       8
 *
 */
#include <cstdio>
#include <cstring>

int main() {
    char firstName[40];
    char lastName[40];
    int lenFirstName, lenLastName;
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);

    lenFirstName = strlen(firstName);
    lenLastName = strlen(lastName);

    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n",
	   lenFirstName, lenFirstName, lenLastName, lenLastName);

    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n",
	   lenFirstName, lenFirstName, lenLastName, lenLastName);

    return 0;
}
