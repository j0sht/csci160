/*
 * Write a program that requests your first name and does the follwing:
 *  a. Prints it in enclosed double quotation marks
 *  b. Prints it in a field 20 characters wide, with the whole field in
 *      quotes and the name at the right end of the field.
 *  c. Prints it at the left end of a field 20 characters wide, with the
 *      whole field enclosed in quotes.
 *  d. Prints it in a field three characters wider than the name
 */
#include <cstdio>
#include <cstring>

int main() {
    char name[40];
    printf("Enter your first name: ");
    scanf("%s", name);

    // a
    printf("\"%s\"\n", name);
    // b
    printf("\"%20s\"\n", name);
    // c
    printf("\"%-20s\"\n", name);
    // d
    int width = strlen(name) + 3;
    printf("\"%*s\"\n", width, name);

    return 0;
}
