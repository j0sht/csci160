/*
 * Write a program that reads a single word into a character array, and
 *  then prints the word backward. Hint: use strlen() to compute the index
 *  of the last character in the array.
 */
#include <cstdio>
#include <cstring>

int main() {
    char word[256];
    printf("Enter a word: ");
    scanf("%s", word);
    int len = strlen(word);
    for (int i = len; i >= 0; i--) {
	printf("%c", word[i]);
    }
    printf("\nDone!\n");

    return 0;
}
