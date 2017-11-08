// Write a function named Least, that takes four int's
// and returns the smallest of the four values
#include <cstdio>

// My solution
int least(int a, int b, int c, int d)
{
    int smallest = a;
    int vals[] = {b,c,d};
    for (int i = 0; i < sizeof(vals)/sizeof(int); i++)
	if (vals[i] < smallest)
	    smallest = vals[i];
    return smallest;
}

// TESTING (Not supposed to include on midterm)
int main()
{
    printf("Least of 1, 3, 20, and 7 is %d\n", least(1,3,20,7));
    printf("Least of 18, 6, -8, 6 is %d\n", least(18, 6, -8, 6));
    return 0;
}
