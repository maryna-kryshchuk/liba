#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *tmp = malloc(len);
    mx_memcpy(tmp, src, len);
    mx_memcpy(dst, tmp, len);
    free(tmp);
    return dst;
}

int main() {
    char s[10] = "mama";
    char a[2] = "da";
    mx_memmove(s, )

}
// int main() {
//     char *s = mx_strnew(30);
//     s = "Hello World!";
//     mx_memmove(&s[6], s, 12);
//     printf("%s", s);
//     return 0;
// }

