/*
 * Write a program that creates an array with 26 elements and stores the
 *  26 lowercase letters in it. Also have it show the array contents.
 */
#include <cstdio>

const int MAX = 26;

int main() {
    char alphabet[MAX];

    for (int c = 'a', i = 0; i < MAX; c++, i++)
	alphabet[i] = c;

    for (int i = 0; i < MAX; i++)
	printf("%-2c", alphabet[i]);
    printf("\n");

    return 0;
}
