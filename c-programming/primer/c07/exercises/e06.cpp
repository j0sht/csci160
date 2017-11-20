/*
 * Write a program that reads input up to # and reports the number of times
 *  that the sequence 'ei' occurs.
 *
 * NOTE: The program will have to "remember" the preceding character as
 *       well as the current character. Test it with input such as
 *       "Receive your eieieo award."
 */
#include <cstdio>

int main() {
    char curr, prev;
    unsigned ei_count = 0;

    while ((curr=getchar()) != '#') {
	if (curr == 'i' && prev == 'e')
	    ei_count++;
	prev = curr;
    }
    printf("'ei' occured %u times.\n", ei_count);

    return 0;
}
