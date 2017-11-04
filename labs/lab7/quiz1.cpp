#include <cstdio>
#include <cstring>

int main() {
    char strY[20] = "1234567891234567891";
    char strX[19];
    strncpy(strX, strY, 18);
    printf("strX = %s\n", strX);
    printf("strY = %s\n", strY);
    return 0;
}
