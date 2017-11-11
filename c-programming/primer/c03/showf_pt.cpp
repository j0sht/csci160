// showf_pt.c -- displays float value in two ways
#include <cstdio>

int main() {
    float aboat = 32000.00;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    // next line requires c99 or later compliance
    printf("And it's %a in hexadecimal, powers of 2 notation\n",
	   aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}
