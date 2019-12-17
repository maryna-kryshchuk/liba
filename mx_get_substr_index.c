#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int result = -1;

    if (!(str && sub))
        result = -2;
    else {
        int i = 0;

        for (int j = 0; str[i] != '\0'; i++) {
            if (str[i] == sub[j]) {
                if (j == mx_strlen(sub) - 1) {
                    result = i - j;
                    break;
                }
                j++;
            }
        }
    }
    return result;
}


