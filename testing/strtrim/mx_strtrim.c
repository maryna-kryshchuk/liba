#include "libmx.h"


char *mx_strtrim(const char *str) {
    if (str == NULL)
        return NULL;
    int start = 0;
    while(mx_isspace(str[start]))
        start++;
    int end = mx_strlen(str) - 1;
    while (end >= 0 && mx_isspace(str[end]))
        end--;
    if (end == -1)
        return mx_strnew(0);
    char *newstr = mx_strnew(end - start + 1);
    if (newstr != NULL)
        mx_strncpy(newstr, &str[start], end - start + 1);
    return newstr;
    }

int main (){
   char *str = "\f My name... is Neo \t\n ";
   str = mx_strtrim(str);
   printf("%s", str);
   return 0; 
}

