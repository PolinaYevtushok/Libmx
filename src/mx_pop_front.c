#include "../inc/libmx.h"

void mx_pop_front(t_list **head)
{
    t_list *tmp = NULL;
	if (!head || !*head)
		return;
	if(!(*head)->next)
	{
		free((*head)->data);
		free(*head);
		*head = NULL;
	}
	else
	{
		tmp = (*head)->next;
		free((*head)->data);
		free(*head);
		*head = tmp;
	}
}
