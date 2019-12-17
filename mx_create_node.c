#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *t = (t_list *)malloc(sizeof(t_list));
    if(!t)
        return NULL;
    t->data = data;
    t->next = NULL;
    return t;
}

int main() {
    t_list *a = mx_create_node("PAPA ");
    t_list *b = mx_create_node("mama ");
    a->next = b;
    while(a != NULL) {
        printf("%s", a->data);
        a = a->next;
    }
return 0;
}

