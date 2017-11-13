// printcal.cpp -- finding printf()'s return value
#include <cstdio>

int main() {
    int bph20 = 212; // boiling point of water
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph20);
    printf("The printf() function printed %d characters.\n", rv);

    return 0;
}
