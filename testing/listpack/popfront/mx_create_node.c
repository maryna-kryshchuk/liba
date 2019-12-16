#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *t = (t_list *)malloc(sizeof(t_list));
    if(!t)
        return NULL;
    t->data = data;
    t->next = NULL;
    return t;
}


