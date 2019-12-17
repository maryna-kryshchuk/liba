#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    for(size_t i = 0; i < n; i++)
        d[i] = s[i];
    return dst;
}

// int main() {
//     unsigned char src[10]= "123456";
//     unsigned char dst[10]= " ";
//     mx_memcpy(dst, src, 2);
//     printf("%s", dst);
//     return 0;
// }

