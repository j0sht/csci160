/*
 * Write a program that request the download speed in megabits per second
 *  (Mbs) and the size of a file in megabytes (MB). The program should
 *  calculate the download time for the file.
 *
 * Note that in this context one byte is 8 bits.
 *
 * Use type float, and use / for division.
 *
 * The program should report all three values (download speed, file size,
 *  and download time) showing two digits to the right of the decimal point,
 *  as in the following:
 *
 *  At 18.12 megabits per second, a file of 2.20 megabytes downloads in
 *   0.97 seconds.
 *
 */
#include <cstdio>

int main() {
    double downloadSpeed, fileSize;
    printf("Enter the download speed (in Mbs): ");
    scanf("%lf", &downloadSpeed);
    printf("Enter the file size (in MB): ");
    scanf("%lf", &fileSize);

    double fileSizeInBits = fileSize * 8;
    double seconds = fileSizeInBits / downloadSpeed;
    printf("At %.2lf megabits per second, a file of %.2lf megabytes "
	   "downloads in %.2lf seconds.\n", downloadSpeed, fileSize,
	   seconds);

    return 0;
}
