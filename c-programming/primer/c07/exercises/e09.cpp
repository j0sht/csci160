/*
 * Write a program that accepts a positive integer as input and then
 *  displays all the prime numbers smaller than or equal to that number.
 */
#include <cstdio>

void print_primes(int n);
bool is_prime(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    print_primes(n);

    return 0;
}

void print_primes(int n) {
    for (int i = 2; i <= n; i++)
	if (is_prime(i))
	    printf("%d ", i);
    printf("\n");
}

bool is_prime(int n) {
    if (n <= 1)
	return false;
    for (int i = 2; i < n; i++)
	if (n % i == 0)
	    return false;
    return true;
}
