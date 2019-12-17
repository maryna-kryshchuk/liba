#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int counter = 0;
    int f = 1;

	if (str == NULL)
        return -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c && f == 1) {
            counter++;
            f = 0;
        }
        if (str[i] == c) {
            f = 1;
        }
    }
    return counter;
}


