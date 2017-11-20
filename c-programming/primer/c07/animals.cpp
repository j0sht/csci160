// animals.cpp -- uses a switch statement
#include <cstdio>
#include <cctype>

int main() {
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#') {
	if ('\n' == ch)
	    continue;
	if (islower(ch)) // lowercase only
	    switch (ch) {
	    case 'a':
		printf("Argali, a wild sheep of Asia\n");
		break;
	    case 'b':
		printf("Babirusa, a wild pig of Malay\n");
		break;
	    case 'c':
		printf("Coati, a racoonlike animal\n");
		break;
	    case 'd':
		printf("Desman, an aquatic, molelike critter\n");
		break;
	    case 'e':
		printf("Echidna, the spiny anteater\n");
		break;
	    case 'f':
		printf("fisher, brownish marten\n");
		break;
	    default:
		printf("That's a stumper!\n");
	    }
	else
	    printf("I recognize only lowercase letters.\n");
	while (getchar() != '\n')
	    continue; // skip rest of input line
	printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}
