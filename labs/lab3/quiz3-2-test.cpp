#include <cstdio>

int main() {
    int i;
    printf("Enter an integer: ");
    int scanfVal = scanf("%d", &i);
    if (scanfVal) {
	if (i < 2) {
	    printf("Tiny!\n");
	} else {
	    printf("Not tiny\n");
	}
    } else {
	printf("Not a number!\n");
    }
    return 0;
}
