// echo_eof.cpp -- repeats input to end of file
#include <cstdio>

int main() {
    char c;

    while ((c=getchar()) != EOF)
	putchar(c);

    return 0;
}
