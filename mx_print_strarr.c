#include "libmx.h"
 
void mx_print_strarr(char **arr, const char *delim) {
    if (arr != NULL && delim != NULL && *arr != NULL) {
        for (int i = 0; arr[i] != NULL; i++) {
            mx_printstr(arr[i]);
            if (arr[i + 1] != NULL)
                mx_printstr(delim);
        }
        write(1, "\n", 1);
    }
}

int main() {
    char *arr1[] = {"one", "two", "three", "four", NULL};
     char *d = "JJJ";
    // char *delim = &d;
     mx_print_strarr(arr1, d);
}


