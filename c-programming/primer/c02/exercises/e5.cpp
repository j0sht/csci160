/*
 * Write a program thar produces the following output:
 *
 *  Brazil, Russia, India, China
 *  India, China,
 *  Brazil, Russia
 *
 * Have the program use two user-defined functions in addition to main
 *  one named br() that prints the "Brazil, Russia" message once, and one
 *  named ic() that prints "India, China" once. Let main take care of
 *  any additional printing tasks.
 */
#include <cstdio>

void br();
void ic();

int main() {
    br(); printf(", "); ic(); printf("\n");
    ic(); printf(",\n");
    br(); printf("\n");
    return 0;
}

void br() {
    printf("Brazil, Russia");
}

void ic() {
    printf("India, China");
}
