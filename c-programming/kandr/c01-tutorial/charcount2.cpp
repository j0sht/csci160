#include <cstdio>

// count characters in input - version 1
int main() {
    double nc;
    // NOTE: grammatical rules of C/C++ require a for-loop
    //  to have a body (statment(s)).
    // You need to include the semi-colon - null statement
    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc); // %f is used for both floats and double
    return 0;
}
