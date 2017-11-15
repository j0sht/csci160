/*
 * Use nested loops to produce the following:
 *
 *  F
 *  FE
 *  FED
 *  FEDC
 *  FEDCB
 *  FEDCBA
 *
 */
#include <cstdio>

int main() {
    for (int i = 'F'; i >= 'A' ; i--) {
	for (int j = 'F'; j > i-1; j--)
	    printf("%c", j);
	printf("\n");
    }

    return 0;
}
