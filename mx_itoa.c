#include "libmx.h"

char *mx_itoa(int number) {
    int flag = 1;
    int ten = 1;
    int chars = 2;
    char *res;

    if (number < 0) 
        flag = -1;
    for (int i = number; i / 10 != 0; i /= 10, chars++)
        ten *= 10;
    res = mx_strnew(chars);
    chars = 0;
    if (flag == -1) {
        res[chars] = '-';
        chars++;
    }
    for (int i = number; ten != 0; i %= ten, ten /= 10, chars++)
        res[chars] = i / ten * flag + '0';
    return res;
}

int main() {
    int a = -563;
    char *b = mx_itoa(a);
    printf("%s", b);
}

