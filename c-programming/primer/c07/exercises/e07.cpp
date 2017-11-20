/*
 * Write a program that request the hours worked in a week and then
 *  prints the gross pay, the taxes, and the net pay. Assume the following:
 *
 *   a. Basic pay rate = $10.00/hr
 *   b. Overtime (in excess of 40 hours) = time and a half
 *   c. Tax Rate:
 *        15% of the first $300
 *        20% of the next $150
 *        25% of the rest
 *
 * Use #define constants, and don't worry if the example doesn't conform
 *  to the current tax law.
 */
#include <cstdio>

#define PAY_RATE 10.00
#define OVERTIME_HOURS 40
#define OVERTIME_RATE (PAY_RATE + (PAY_RATE * 0.5))
#define OVERTIME_BASE (OVERTIME_HOURS * PAY_RATE)

#define TAX_RATE_15 0.15
#define TAX_RATE_20 0.20
#define TAX_RATE_25 0.25

#define TAX_BREAK_15 300.0
#define TAX_BREAK_20 150.0

#define TAX_DEDUCTION_15 (TAX_RATE_15 * TAX_BREAK_15)
#define TAX_DEDUCTION_20 (TAX_RATE_20 * TAX_BREAK_20)

int main() {
    double hours;
    printf("Enter number of hours worked in week: ");
    scanf("%lf", &hours);

    double gross_pay, taxes;
    gross_pay = (hours > OVERTIME_HOURS) ?
	OVERTIME_BASE + ((hours - OVERTIME_HOURS) * OVERTIME_RATE)
	: hours * PAY_RATE;
    printf("Gross pay: $%.2lf\n", gross_pay);

    double gross_pay_copy = gross_pay;
    if (gross_pay_copy <= TAX_BREAK_15) {
	taxes = gross_pay_copy * TAX_RATE_15;
    } else if (gross_pay_copy <= (TAX_BREAK_15 + TAX_BREAK_20)) {
	taxes = TAX_DEDUCTION_15;
	gross_pay_copy -= TAX_BREAK_15;
	taxes += gross_pay_copy * TAX_RATE_20;
    } else {
	taxes = TAX_DEDUCTION_15 + TAX_DEDUCTION_20;
	gross_pay_copy -= TAX_BREAK_15;
	gross_pay_copy -= TAX_BREAK_20;
	taxes += gross_pay_copy * TAX_RATE_25;
    }
    printf("Taxes: $%.2lf\n", taxes);
    printf("Net pay: $%.2lf\n", gross_pay - taxes);

    return 0;
}
