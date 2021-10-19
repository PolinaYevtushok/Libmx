#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void * , void *))
{
    if (!cmp)
        return lst;
    t_list *temp;
    void *tmp;
    int i, j;
    int size = mx_list_size(lst);
    for ( i = 0; i < size - 1; ++i)
    {
        temp = lst;
        for (j = 0; j < size -1 - i; ++j)
        {
            if (cmp(temp->data, temp->next->data))
            {
                tmp = temp->data;
                temp->data = temp->next->data;
                temp->next->data = tmp;
            }
            temp = temp->next;
        }
    }
    return lst;

}
