// badcount.cpp -- incorrect argument counts
#include <cstdio>

int main() {
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m);    // too many arguments
    printf("%d %d %d\n", n); // too few arguments
    printf("%d %d\n", f, g); // wrong kind of values
    // NOTE: For line above, floats are not displayed to the nearest int
    //       or truncated to the nearest int
    return 0;
}
