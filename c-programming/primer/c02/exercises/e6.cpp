/*
 * Write a program that creates an integer variable called toes.
 * Have the program set toes to 10. Also have the program calculate
 *  what twice toes is and what toes squared is. The program should
 *  print all three values, identifying them.
 */
#include <cstdio>

int main() {
    int toes = 10;
    int twoTimesToes = toes * 2;
    int toesSquared = toes * toes;
    printf("%13s %2d\n", "toes:", toes);
    printf("%13s %2d\n", "two x toes:", twoTimesToes);
    printf("%13s %2d\n", "toes squared:", toesSquared);

    return 0;
}
