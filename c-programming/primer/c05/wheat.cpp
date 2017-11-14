// wheat.cpp -- exponential growth
#include <cstdio>

#define SQUARES 64 // Squares on a checkerboard

int main() {
    const double CROP = 2E16; // World wheat production in wheat grains
    double current, total;

    int count = 1;

    printf("square     grains       total      ");
    printf("fraction of \n");
    printf("           added        grains     ");
    printf("world total\n");
    total = current = 1.0; // start with 1 grain
    printf("%4d %13.2e %12.2e %12.2e\n",
	   count, current, total, total/CROP);

    while (count < SQUARES) {
	count += 1;
	current *= 2.0;
	// double grains on next square
	total += current; // update total
	printf("%4d %13.2e %12.2e %12.2e\n",
	       count, current, total, total/CROP);
    }
    printf("That's all.\n");

    return 0;
}
