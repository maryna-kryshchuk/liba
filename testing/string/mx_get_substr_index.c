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

// int main() {
//     char *s1 = "FGHJKL";
//     char *s2 = NULL;
//     int i = mx_get_substr_index(s1, s2);
//     printf("%d", i);
//     return 0;
// }

