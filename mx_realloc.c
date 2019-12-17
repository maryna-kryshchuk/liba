#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    size_t len;
    void *res;

    if (!ptr && size)
        return malloc(size);
    if (size == 0 && ptr) {
        free(ptr);
        return NULL;
    }
    len = mx_strlen(ptr);
    if (len > size) {
        res = malloc(len);
        if (!res)
            return NULL;
        res = mx_memmove(res, ptr, len);
    }
    else {
        res = malloc(size);
        if (!res)
            return NULL;
        res = mx_memmove(res, ptr, size);
    }
    return res;
}


