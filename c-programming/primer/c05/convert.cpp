// convert.cpp -- automatic type conversions
#include <cstdio>

int main() {
    char ch;
    int i;
    float fl;
    // 67.00 = 67 = 'C'
    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    // 'C' is converted to int 67, which is then added to the 1.
    // The resulting 4-byte integer 68 is truncated to 1 byte and
    //  stored in ch
    ch = ch + 1;
    // The value of ch is converted to a 4-byte integer (68) for the
    //  multiplication by 2. The resulting integer (136) is converted
    //  to floating point in order to be added to fl.
    // The result (203.00f) is converted to int and stored in i
    i = fl + 2 * ch;
    // The value of ch ('D' or 68) is converted to floating point for
    //  multiplication by 2.0. The value of i (203) is converted to
    //  floating point for the addition, and the result (339.00) is
    //  stored in fl.
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    // Case of Demotion: Setting ch equal to an out-of-range number.
    // After the extra bits are ignored, ch winds up with the ASCII
    //  code for the S character. Or, more specifically, 1107 % 256
    //  is 83, the code for 'S'
    ch = 1107;
    printf("Now ch = %c\n", ch);
    // Case of Demotion: setting ch equal to a floating point number.
    // After truncation takes place, ch winds up with the ASCII code
    //  for the 'P' chararacter
    ch = 80.89;
    printf("Now ch = %c\n", ch);

    return 0;
}
