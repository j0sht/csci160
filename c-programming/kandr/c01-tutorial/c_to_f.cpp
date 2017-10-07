#include <cstdio>

double cToF(double c) {
    return (9.0/5.0) * c + 32;
}

int main() {
    double c;
    printf("Enter degrees celsius: ");
    scanf("%lf", &c);
    double f = cToF(c);
    printf("%.2lf degrees celsius is %.2lf degrees fahrenheit.\n",
	   c,f);
    return 0;
}
