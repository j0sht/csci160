#include <cstdio>

void f1(int x) {
    if (x > 0) {
	int newX = x-1;
	printf("f1: %d\n", newX);
	f1(newX);
    }
}

void f2(int x) {
    if (x > 0) {
	int newX = x-1;
	f2(newX);
	printf("f2: %d\n", newX);
    }
}

int main() {
    f1(4);
    f2(4);
}
