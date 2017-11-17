/*
 * Write a program that reads in a line of input and then prints the line
 *  in reverse order.
 *
 * You can store the input in an array of char
 *
 * Assume that the line is no longer than 255 characters.
 */
#include <cstdio>
#include <cstring>

const int SIZE = 255;

int main() {
    char line[SIZE];
    char c;
    int i = 0;

    do {
	scanf("%c", &c);
	line[i] = c;
    } while (c != '\n' && i++ < SIZE-1);
    line[i] = '\0';

    int len = strlen(line);
    for (i = len-1; i >= 0; i--)
	printf("%c", line[i]);
    printf("\n");

    return 0;
}
