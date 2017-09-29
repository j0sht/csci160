// Joshua Tate
// Lab 2 Exercise
//
// This program calculates a car rental's price, given user input and
//   set rates on cost per day and cost per kilometre.
#include <cstdio>

// cost per day is $9.99
const float CostPerDay = 9.99;
// cost per kilometer is $0.12
const float CostPerKm = 0.12;

// display the welcome message
void welcome();

// prompt the user to enter a number of days,
//   read and return their response
//   (no error checking currently performed)
int getNumDays();

// prompt the user to enter the number of kilometres
//   read and return their response
float getNumKms();

// calculate the cost given days and kilometres
//   return the result
float calculatePrice(int days, float kms);

// display the cost given the days, kilometres and price
void displaySummary(int days, float kms, float price);

int main()
{
    // declare variables for the number of days, kilometres,
    //   and final price
    int numberOfDays;
    float numberOfKms, price;
    // display the welcome/intro message
    welcome();
    // get and store the number of days
    numberOfDays = getNumDays();
    // get and store the number of kilometres
    numberOfKms = getNumKms();
    // calculate and store the price
    price = calculatePrice(numberOfDays, numberOfKms);
    // display the results
    displaySummary(numberOfDays, numberOfKms, price);
    // end the program
    return 0;
}

void welcome()
{
    // Display welcome message to user, explain purpose of program
    printf("Welcome to the car rental pricer.\n\n");
    printf("You will be prompted to enter the number of days the car ");
    printf("was rented,\nand the number of kilometres driven, and the ");
    printf("price will then be calculated\nbased on $9.99 per day ");
    printf("plus $0.12 per kilometre.\n\n");
}

int getNumDays()
{
    // days will hold user entered number of days
    int days;
    // prompt user for number of days, store in days
    printf("Please enter the number of days the car was rented (e.g. 3): ");
    scanf("%d", &days);
    // return days
    return days;
}

float getNumKms()
{
    // kms will hold user entered number of kilometres
    float kms;
    // prompt user for number of kilometres, store in kms
    printf("Please enter the number of kilometres driven (e.g. 172.4): ");
    scanf("%f", &kms);
    // return kms
    return kms;
}

float calculatePrice(int days, float kms)
{
    // dayCost holds cost per given days
    float dayCost = days * CostPerDay;
    // kmsCost hold cost per given kilometres
    float kmsCost = kms * CostPerKm;
    // return the sum of dayCost and kmsCost
    return dayCost + kmsCost;
}

void displaySummary(int days, float kms, float price)
{
    // Display formatted output for final price
    printf("The final price for %d days and %.1f kilometres is $%.2f.\n",
	   days, kms, price);
}
