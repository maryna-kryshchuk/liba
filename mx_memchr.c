#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *src = (unsigned char *)s;
    unsigned char chr = (unsigned char)c;
    for(size_t i = 0; i < n; i++) {
        if(src[i] == chr)
            return src + i;
    }
    return NULL;
}

// int main() {
//     unsigned char src [15] = "12344";
//     char* a = mx_memchr(src, '2', 5);
//     printf("%s", a);
//     return 0;
// }


