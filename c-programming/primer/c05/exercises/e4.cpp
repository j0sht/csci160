/*
 * Write a program that asks the user to enter a height in centimeters and
 *  then displays the height in centimeters and in feet and inches.
 *
 * Fractional centimeters and inches should be allowed, and the program
 *  should allow the user to continue entering heights until a nonpositive
 *  value is entered.
 */
#include <cstdio>

const double CMS_PER_IN = 2.54;
const double IN_PER_FT = 12.0;

double getHeightInCM();

int main() {
    double cms = getHeightInCM();
    while (cms > 0) {
	double inches = cms / CMS_PER_IN;
	int feet = inches / IN_PER_FT;
	inches -= (feet*IN_PER_FT);
	printf("%.1lf cm = %d feet, %.1lf inches\n",
	       cms, feet, inches);
	cms = getHeightInCM();
    }
    printf("bye\n");
    return 0;
}

double getHeightInCM() {
    double cms;
    printf("Enter height in CMs (<=0 to quit): ");
    scanf("%lf", &cms);
    return cms;
}
