// printout.cpp -- uses conversion specifiers
#include <cstdio>

#define PI 3.141593

int main() {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou are too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}
