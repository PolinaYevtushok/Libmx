#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data)
{
    if (!list)
        return;
	t_list *tmp = mx_create_node(data);
    if (*list)
	{
		while((*list)->next)
			list = &(*list)->next;
		(*list)->next= tmp;
	}
    else
    	*list = tmp;
}
