/*
 * Write a program that produces the following output:
 *
 *  Smile!Smile!Smile!
 *  Smile!Smile!
 *  Smile!
 *
 * Have the program define a function that displays the string Smile! once,
 *  and have the program use the function as often as needed.
 */
#include <cstdio>

void smile();

int main() {
    smile(); smile(); smile(); printf("\n");
    smile(); smile(); printf("\n");
    smile(); printf("\n");
    return 0;
}

void smile() {
    printf("Smile!");
}
