#include "libmx.h"

char *mx_strdup(const char *str) {
    char *s = (char *) malloc(mx_strlen(str) + 1);
    if(s)
        mx_strcpy(s, str);
    return s;
}

