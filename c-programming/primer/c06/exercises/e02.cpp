/*
 * Use nested loops to produce the following:
 *
 *  $
 *  $$
 *  $$$
 *  $$$$
 *  $$$$$
 *
 */
#include <cstdio>

const int SIZE = 5;

int main() {
    for (int i = 0; i < SIZE; i++) {
	for (int j = 0; j < i+1; j++)
	    printf("$");
	printf("\n");
    }

    return 0;
}
