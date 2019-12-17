#include "libmx.h"

static int count_s(unsigned long nbr) {
    unsigned long nbr_copy = nbr;
    int size = 0;

    while (nbr_copy > 0) {
        size++;
        nbr_copy /= 16;
    }
    return size;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    int size = 0;
    char *res = NULL;
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                  'a', 'b', 'c', 'd', 'e', 'f'};
    
    if (nbr == 0) {
        res = mx_strnew(1);
        res[0] = '0';
    }
    else {
        size = count_s(nbr);
        res = mx_strnew(size);
        while (nbr > 0) {
            res[--size] = hex[nbr % 16];
            nbr /= 16;
        }
    }
    return res;
}

int main() {
    int a = 25;
    char *b = mx_nbr_to_hex(a);
    printf("%s", b);
    return 0;
}


