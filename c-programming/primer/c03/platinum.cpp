// platinum.cpp -- your weight in platinum
#include <cstdio>

int main() {
    float weight; // user weight
    float value;  // platinum equivalent

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    // get input from the user
    scanf("%f", &weight);
    // platinum is $937.75 per ounce (on Nov. 10, 2017)
    // 14.5833 converts pounds avd. to ounce troy
    value = 937.75 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}
