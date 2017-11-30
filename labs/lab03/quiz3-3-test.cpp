#include <cstdio>

void rotate(int &x, int &y, int &z) {
    int oldX = x;
    int oldY = y;
    int oldZ = z;
    x = oldY;
    y = oldZ;
    z = oldX;
}

int main() {
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);
    printf("Before rotate: x=%d, y=%d, z=%d\n",
	   x,y,z);
    rotate(x,y,z);
    printf("After rotate: x=%d, y=%d, z=%d\n",
	   x,y,z);
    return 0;
}
