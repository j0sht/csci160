/*
 * Find out what your system does with integer overflow, floating-point
 *  overflow, and floating-point underflow by using an experimental approach
 */
#include <cstdio>
#include <climits>
#include <cfloat>

int main() {
    int maxInt = INT_MAX;
    int minInt = INT_MIN;
    float maxFloat = FLT_MAX;
    float minFloat = FLT_MIN;

    printf("Max Int: %d\n", maxInt);
    printf("Max Int + 1: %d\n", maxInt+1);
    printf("Min Int: %d\n", minInt);
    printf("Min Int - 1: %d\n", minInt-1);

    printf("Max Float: %f\n", maxFloat);
    printf("Max Float + 1: %f\n", maxFloat+1);
    printf("Min Float: %f\n", minFloat);
    printf("Min Float - 1: %f\n", minFloat-1);

    return 0;
}
