#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    char *ptr = b;
    for (; len > 0; len--, ptr++) 
        *ptr = c;
    return b;
}

int main () {
    unsigned char src[15] = "0123456789";
    mx_memset (src, 'c', 8);
    printf("%s", src);
    return 0;
}

