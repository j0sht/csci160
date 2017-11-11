// print1.cpp -- displays some properties of printf()
#include <cstdio>

int main() {
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten-two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten); // forgot two arguments

    return 0;
}
