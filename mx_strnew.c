#include "libmx.h"

char *mx_strnew(const int size) {
    char *s;

    if (size < 0)
        return NULL;
    s = malloc(size + 1);
    if (!s)
        return NULL;
    for (int i = 0; i <= size; i++)
        s[i] = '\0';
    return s;
}

