void mx_swap_char(char *s1, char *s2) {
    if (s1 && s2) {
        char s3 = *s1;
        *s1 = *s2;
        *s2 = s3;
    }
}

#include <stdio.h>
int main() {
char s[] = "ONE";
mx_swap_char(&s[0], &s[1]);
mx_swap_char(&s[1], &s[2]);
printf("%s", s);
return 0;
}


