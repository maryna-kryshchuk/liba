#include "libmx.h"

static char *to_str(const char *file, int counter) {
    char buf;
    int src;
    int n;
    
    src = open(file, 'r');
    char *s = malloc(sizeof(char) * (counter + 1));
    n = read(src, &buf, sizeof(char));
    for (int i = 0; i < counter; i++) {
        s[i] = buf;
        n = read(src, &buf, sizeof(char));
    }
    s[counter] = '\0';
    close(src);
    return s;
}

char *mx_file_to_str(const char *file) {
    char buf;
    int counter = 0;
    int src = open(file, 'r');
    int n = read(src , &buf, sizeof(char));

    if (src < 0)
        return NULL;
    if (n <= 0) {
        close(src);
        return NULL;
    }
    while (n > 0) {
        counter++;
        n = read(src , &buf, sizeof(char));
    }
    close(src);
    return(to_str(file, counter));
}

int main(int n, char **b) {
    if (n > 0) {
        char *s = mx_file_to_str(b[1]);
        printf("%s", s);
    }
}

