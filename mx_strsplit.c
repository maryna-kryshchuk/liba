#include "libmx.h"

void *my_realloc(void *ptr, size_t size) {
    if (ptr == NULL)
        return(malloc(size));
    if (size == 0) {
        free(ptr);
        return NULL;
    }
    void *res = malloc(size);
    res = mx_memcpy(res, ptr, malloc_size(ptr));
    free(ptr);
    return res;
}

char **mx_strsplit(const char *s, char c) {
    int n = mx_count_words(s, c);
    char **res = malloc(sizeof(char *) * (n + 1));
    int flag = 1;

    for (int i = 0, j = 0, h = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            res[j] = my_realloc(res[j], h * sizeof(char));
            res[j][h] = s[i];
            h++;
            flag = 0;
        }
        if (s[i] == c && flag == 0) {
            res[j][h] = '\0';
            j++;
            h = 0;
            flag = 1;
        }
    }
    res[n] = NULL;
    return((s != NULL) ? (res) : (NULL));
}



