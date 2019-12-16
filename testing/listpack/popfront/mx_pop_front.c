#include "libmx.h"

void mx_pop_front(t_list **list) {
    if (list == NULL)
        return;
    if(*list == NULL)
        return;
	t_list *new = (*list)->next;
        free(*list);
        *list = new;
}

#include <stdio.h>
int main() {
t_list *a = mx_create_node("papa");
t_list *b = mx_create_node("mama");

a->next = b;

mx_pop_front(&a);
while(a != NULL) {
printf("%s ", a->data); 
a = a->next;
return 0;
}
}
