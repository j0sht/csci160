#include <cstdio>
#include <cstring>

int main() {
    char strX[50] = "Hello world";
    char strY[50] = "Goodnight world";
    printf("Before swap:\n");
    printf("\tstrX = %s\n", strX);
    printf("\tstrY = %s\n", strY);
    char tmp[50];
    strcpy(tmp, strX);
    strcpy(strX, strY);
    strcpy(strY, tmp);
    printf("After swap:\n");
    printf("\tstrX = %s\n", strX);
    printf("\tstrY = %s\n", strY);
    return 0;
}
