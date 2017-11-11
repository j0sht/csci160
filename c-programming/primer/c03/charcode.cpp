// charcode.cpp -- displays code number for a character
#include <cstdio>

int main() {
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch); // user inputs a character
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}
