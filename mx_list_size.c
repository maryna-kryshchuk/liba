#include "libmx.h"

int mx_list_size(t_list *list) {
    if(list == NULL)
        return 0;
    int count;

    count = 1;
    while(list->next != NULL) {
	    count++;
	    list = list->next;
    }
    return count;
}
#include <stdio.h>
int main() {
//t_list *a = mx_create_node("paps");





int i = mx_list_size(0);

//while(a != NULL) {
    
//    printf("%s ", a->data);
  // a = a->next;
//
printf("%d", i);
return 0;
}

