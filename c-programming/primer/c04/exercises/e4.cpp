/*
 * Write a program that requests your height in inches and your name,
 *  and then displays the information in the following form:
 *
 *  <name>, you are <height> feet tall
 *
 * Use type float, and use / for division. If you prefer, request the height
 *  in centimeters and display it in meters.
 */
#include <cstdio>

int main() {
    char name[40];
    float heightInInches;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height in inches: ");
    scanf("%f", &heightInInches);

    float heightInFeet = heightInInches / 12.0;
    printf("%s, you are %g feet tall.\n", name, heightInFeet);

    return 0;
}
