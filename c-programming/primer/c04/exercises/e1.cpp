/*
 * Write a program that asks for your first name, your last name, and then
 *  prints the names in the format last, first
 */
#include <cstdio>

int main() {
    char first[40];
    char last[40];

    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);

    printf("Hello %s, %s\n", last, first);

    return 0;
}
