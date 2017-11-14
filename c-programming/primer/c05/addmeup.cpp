// addmeup.cpp -- five kinds of statements
#include <cstdio>

int main() { // finds sum of first 20 integers
    int count, sum; // 1. declaration statement

    count = 0; // 2. assignment statement
    sum = 0;

    while (count++ < 20) // 3. while statement
	sum += count;

    printf("sum = %d\n", sum); // 4. function statement

    return 0; // 5. return statement
}
