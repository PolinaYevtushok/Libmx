#include "../inc/libmx.h"

t_list *mx_create_node(void *data)
{
    t_list *list = (t_list *)malloc(sizeof(t_list));
    if (!list)
        return NULL;
    list->data = data;
    list->next = NULL;
    return list;
}
