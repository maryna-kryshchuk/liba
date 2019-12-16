#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *res;

    if (!s1 && s2)
        return mx_strdup(s2);
    else if (!s2 && s1) 
        return mx_strdup(s1);
    else if (!s1 && !s2)
        return NULL;
    else {
        int len1 = mx_strlen(s1);
        int len2 = mx_strlen(s2);

        res = mx_strnew(len1 + len2);
        for (int i = 0; s1[i] != '\0'; i++)
            res[i] = s1[i];
        for (int j = 0; s2[j] != '\0'; j++, len1++)
            res[len1] = s2[j];
    }
    return res;
}

int main() {
//char *str1 = "this";
//char *str2 = "dodge ";
char *str3 = NULL;
char *s = mx_strjoin(str3, str3); //returns "dodge this"
//mx_strjoin(str1, str3); //returns "this"
//mx_strjoin(str3, str3); //returns NULL
printf("%s", s);
}


