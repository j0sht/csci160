#include <cstdio>
#include <cstring>

int main() {
    char strX[20] = "1234567891234567891";
    char strY[19];
    strncpy(strY, strX, 18);
    printf("strX = %s\n", strX);
    printf("strY = %s\n", strY);
    return 0;
}
