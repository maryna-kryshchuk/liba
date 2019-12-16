#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    size_t l_big = big_len;

    if (big_len - little_len < 0 || !big_len || !little_len ||
    !big || !little)
        return NULL;
    if (little_len > 1) {
        while (l_big > 0) {
            if (*((unsigned char *)big) == *((unsigned char *)little)) {
                if(mx_memcmp(big, little, little_len) == 0)
                    return (unsigned char *)big;
            }
            big = (unsigned char *)big + 1;
            l_big--;
        }
    }
    else 
        return mx_memchr(big, *((unsigned char *)little), big_len);
    return NULL;
}


int main() {
    unsigned char big[7] = "abcathg";
    unsigned char lit[3] = "cat";
    char *c = mx_memmem(big, 7, lit, 3);
    printf("%s", c);
    return 0;
}

