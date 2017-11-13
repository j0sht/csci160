// intconv.cpp -- some mismatched integer conversions
#include <cstdio>

#define PAGES 336
#define WORDS 65618

int main() {
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    // When printf prints 336 using %c, it looks at only 1 byte out of
    //  the two used to hold 336.
    // This truncation amounts to dividing the integer by 256 and keeping
    //  just the remainder. (Here the remainder is 80, which is the ASCII
    //  value for the character P.)
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n",
	   WORDS, WORDS, WORDS);

    return 0;
}
