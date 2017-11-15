// summing.cpp -- sums integers entered interactively
#include <cstdio>

int main() {
    long num;
    long sum = 0L; // Initialize sum to zero
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1) {
	sum += num;
	printf("Please enter next integer (q to quit): ");
	status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
