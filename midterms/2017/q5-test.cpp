#include <cstdio>

int Sr(int n) {
    int x, result;
    if (n == 0) {
	result = 0;
    } else {
	x = Sr(n-1);
	result = x + (n*n);
    }
    return result;
}

int S(int n) {
    int result = 0;
    while (n > 0) {
	result += n*n;
	n--;
    }
    return result;
}

int main() {
    printf("Sr(2) = %d\n", Sr(2));
    printf("S(2)  = %d\n", S(2));
    return 0;
}
