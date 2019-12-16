#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    if(!needle || mx_strlen(needle) == 0)
        return (char *)haystack;
    char* res = NULL;
    int i = 0;
    
    for (int j = 0; haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[j]) {
            if (j == mx_strlen(needle) - 1) {
                res = (char *)&haystack[i - j];
                break;
            }
            j++;
        }
        else
            j = 0;
    }
    return res;
}

int main () {
    char str[11] = "0123456789";
    char str2[5] = "345";
    char *i = mx_strstr(str, str2);
    printf("%s", i);
}

