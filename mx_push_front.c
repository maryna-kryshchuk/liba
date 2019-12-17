#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
    t_list *nextlist;
    nextlist = mx_create_node(data);
    if(!list)
        nextlist->next = NULL;
    else
        nextlist->next = *list;
        *list = nextlist;
}

int main() {
    t_list *a = mx_create_node("hello");
    t_list *b = mx_create_node("bye ");
    a->next = b;
    mx_push_front(&a,"morning");
        while(a != NULL) {
        printf("%s", a->data);
        a = a->next;
    }
return 0;
}
