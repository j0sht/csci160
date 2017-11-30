#include <cstdio>
#include <cmath>

int main()
{
    int a;
    float f;
    double x;
    
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &x);

    printf("%10d\n", a);
    printf("%10f\n", f);
    printf("%10lf\n", x);

    printf("%8.3f\n", f);

    x = pow(f, a);
    printf("f ^ a == %lf\n", x);
    return 0;
}
