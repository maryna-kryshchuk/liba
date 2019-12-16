#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *new = mx_create_node(data);
    if ((new == NULL) || (list == NULL))
        return;
    new->data = data;
    new->next = NULL;
    if(*list == NULL)
        *list = new;
    else {
        t_list *last = *list;
        while(last->next != NULL)
            last = last->next;
        last->next = new;
    }
}


int main() {
    t_list *a = mx_create_node("hello");
    // t_list *b = mx_create_node("bye ");
    // a->next = b;
    mx_push_back(&a,"morning");
        while(a != NULL) {
        printf("%s", a->data);
        a = a->next;
    }
    return 0;
}

