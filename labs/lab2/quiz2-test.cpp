#include <cstdio>

double fahr2cels(double fahr)
{
    int cels = (fahr -32) / 1.8;
    return cels;
}

int main()
{
    printf("Value of fahr2cels(54.5) = %lf\n", fahr2cels(54.5));
    return 0;
}
