#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

    for (; src[i] && i < len; i++)
        dst[i] = src[i];
    for (; i < len; i++)
        dst[i] = '\0';
    return dst;
}

// int main() {
//     char str1[] = "Hello world!";
//     char str2[15];
//     char *str3 = mx_strncpy(str2, str1, 19);
//     printf("%s", str3);
//     return 0;
// }

