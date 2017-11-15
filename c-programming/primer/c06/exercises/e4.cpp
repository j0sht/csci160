/*
 * Use nested loops to produce the following pattern:
 *
 * A
 * BC
 * DEF
 * GHIJ
 * KLMNO
 * PQRSTU
 *
 */
#include <cstdio>

const int MAX = 6;

int main() {
    char c = 'A';
    for (int i = 0; i < MAX; i++) {
	for (int j = 0; j < i+1; j++)
	    printf("%c", c++);
	printf("\n");
    }

    return 0;
}
