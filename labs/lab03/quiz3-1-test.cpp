#include <cstdio>

int main() {
    int x;
    printf("Enter an int: ");
    scanf("%d", &x);
    if (x > 100) {
	printf("Big!\n");
    } else if (x >= 2) {
	printf("Normal\n");
    } else {
	printf("Tiny!\n");
    }
    return 0;
}
