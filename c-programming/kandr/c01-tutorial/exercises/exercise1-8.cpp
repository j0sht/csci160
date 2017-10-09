// Write a program to count blanks, tabs, and newlines
#include <cstdio>

int main() {
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;
    int c;
    while ((c=getchar()) != EOF) {
	if (c == ' ') ++blanks;
	if (c == '\t') ++tabs;
	if (c == '\n') ++newlines;
    }
    printf("blanks   = %d\n", blanks);
    printf("tabs     = %d\n", tabs);
    printf("newlines = %d\n", newlines);
    return 0;
}
