// Write a program to determine how much space a person needs to
// house their horses.
// It should ask how many horses they want, then calculate the number
// needed and the total land area needed
#include <cstdio>

int main()
{
    // Ask user how many horses they want, and read it as an int
    int horses;
    printf("Please enter the number of horses you want (e.g. 7):\n");
    scanf("%d", &horses);
    // Calculate and display the minimum number of paddocks needed,
    // assuming at most two horses can live in the same paddock
    int paddocks = (horses / 2) + (horses % 2);
    printf("For %d horses you need %d paddocks,\n", horses, paddocks);
    // Calculate and display the total land area required,
    // assuming 60 square meters per paddock
    int totalLand = paddocks * 60;
    printf("the total land area required is %d square metres.\n", totalLand);
    return 0;
}
