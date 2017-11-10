/*
 * Write a program that converts your age in years to days and
 *  displays both values. Don't worry about fractional years and
 *  leap years.
 */
#include <cstdio>

int main() {
    int age = 27;
    int ageInDays = age * 365;
    printf("%d years in days (w/o leap years): %d\n",
	   age, ageInDays);

    return 0;
}
