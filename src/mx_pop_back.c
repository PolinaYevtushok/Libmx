#include "../inc/libmx.h"

void mx_pop_back(t_list **head)
{
	if (!head || !*head)
		return;
	t_list *tmp = *head;
	while (tmp->next->next)
		tmp = tmp->next;
	free(tmp->next->data);
	free(tmp->next);
	tmp->next = NULL;
}
