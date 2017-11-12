/*
 * Write a program that asks you to enter an ASCII code value, such as 66,
 *  and then prints the character having that ASCII code.
 */
#include <cstdio>

int main() {
    int asciiVal;
    printf("Enter an ASCII code value: ");
    scanf("%d", &asciiVal);
    printf("\n%d = %c\n", asciiVal, asciiVal);

    return 0;
}
