// t_and_f.cpp -- true and false values in C
#include <cstdio>

int main() {
    int true_val, false_val;

    true_val = (10 > 2);   // value of a true relationship
    false_val = (10 == 2); // value of a false relationship
    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}
