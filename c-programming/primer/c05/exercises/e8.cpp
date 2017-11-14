/*
 * Write a program that displays the results of applying the modulus
 *  operation. The user should first enter an integer to be used as the
 *  second operand, which will then remain unchanged. Then the user enters
 *  the numbers for which the modulus will be computed, terminating the
 *  process by entering 0 or less.
 */
#include <cstdio>

int getOperand(const char *prompt) {
    int op;
    printf("%s", prompt);
    scanf("%d", &op);
    return op;
}

int main() {
    printf("This program computes moduli.\n");
    int secondOp = getOperand("Enter an integer to serve as the "
			      "second operand: ");
    int firstOp = getOperand("Now enter the first operand: ");
    while (firstOp > 0) {
	printf("%d %% %d is %d\n", firstOp, secondOp, firstOp % secondOp);
	firstOp = getOperand("Enter next number for first operand "
			     "(<= 0 to quit):\n");
    }
    printf("Done\n");

    return 0;
}
