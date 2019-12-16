#include "libmx.h"

char *mx_itoa(int number) {
    int sign = 1;
    int tens = 1;
    int chars = 2;
    char *res;

    if (number < 0) 
        sign = -1;
    for (int i = number; i / 10 != 0; i /= 10, chars++)
        tens *= 10;
    res = mx_strnew(chars);
    chars = 0;
    if (sign == -1) {
        res[chars] = '-';
        chars++;
    }
    for (int i = number; tens != 0; i %= tens, tens /= 10, chars++)
        res[chars] = i / tens * sign + '0';
    return res;
}

// int main() {
//     int a = -95;
//     char* d = mx_itoa(a);
//     printf("%s", d);
//     return 0;
// }

