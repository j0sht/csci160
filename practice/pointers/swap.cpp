#include <cstdio>

void swap(int *p1, int *p2) {
    if ((p1 != NULL) && (p2 != NULL)) {
	int tmp = *p1;
	(*p1) = *p2;
	(*p2) = tmp;
    }
}

void displayAddress(int *p) {
    if (p != NULL)
	printf("%p\n", p);
}

int main() {
    int *n1 = new int;
    int *n2 = new int;
    (*n1) = 1;
    (*n2) = 2;
    printf("n1 = %d, n2 = %d\n", *n1, *n2);
    swap(n1, n2);
    printf("n1 = %d, n2 = %d\n", *n1, *n2);
    displayAddress(n1);

    return 0;
}
