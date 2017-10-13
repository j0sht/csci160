#include <cstdio>

int main() {
    int x;
    bool userInputInvalid;
    do {
	printf("Please enter an integer: ");
        int r = scanf("%d", &x);
	userInputInvalid = (r == 0);
	if (userInputInvalid) {
	    scanf("%*s");
	}
    } while (userInputInvalid);
    printf("You entered: %d\n", x);
    return 0;
}
