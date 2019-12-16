#include "libmx.h"

void mx_pop_back(t_list **list) {
    if (list == NULL)
	    return;
    if (*list == NULL)
        return;
    if ((*list)->next == NULL) {
	    free(*list);
	    *list = NULL;
	    return;
    }
    t_list *find = *list;
    while(find->next->next != NULL)
	    find = find->next;
    free(find->next);
    find->next = NULL;
}

#include <stdio.h>
int main() {
t_list *a = mx_create_node("papa");
t_list *b = mx_create_node("mama");
t_list *c = mx_create_node("son");
a->next = b;
b->next = c;
mx_pop_back(&a);
while(a != NULL) {
        printf("%s", a->data);
        a = a->next;

}
return 0;
}

