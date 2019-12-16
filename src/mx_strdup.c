#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    char *s = (char *) malloc(mx_strlen(str) + 1);
    if(s)
        mx_strcpy(s, str);
    return s;
}

