// break.cpp -- uses break to exit a loop
#include <cstdio>

int main() {
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1) {
	printf("Length = %0.2f\n", length);
	printf("Enter its width:\n");
	if (scanf("%f", &width) != 1)
	    break;
	printf("Width = %0.2f\n", width);
	printf("Area = %02.f\n", length * width);
	printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;
}