#include <cstdio>

int main() {
    int x;
    bool userInputIsValid = false;
    do {
	printf("Please enter an integer: ");
        int r = scanf("%d", &x);
	userInputIsValid = (r == 1);
	if (!userInputIsValid) {
	    scanf("%*s");
	}
    } while (!userInputIsValid);
    printf("You entered: %d\n", x);
    return 0;
}
