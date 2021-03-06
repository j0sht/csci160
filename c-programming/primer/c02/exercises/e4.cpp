/*
 * Write a program thar produces the following output:
 *
 *  For he's a jolly good fellow!
 *  For he's a jolly good fellow!
 *  For he's a jolly good fellow!
 *  Which nobody can deny!
 *
 * Have the program use two user-defined functions in addition to main
 *  one named jolly() that prints the "jolly good" message once, and one
 *  named deny() that prints the final line once.
 */
#include <cstdio>

void jolly();
void deny();

int main() {
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly() {
    printf("For he's a jolly good fellow!\n");
}

void deny() {
    printf("Which nobody can deny!\n");
}
