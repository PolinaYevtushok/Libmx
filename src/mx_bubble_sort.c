#include "../inc/libmx.h"

int mx_bubble_sort(int *arr, int size)
{
    int count = 0;
    int i, j;
    if (!arr || size == 0)
        return 0;
    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size -1 - i; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                mx_swap_int(&arr[j], &arr[j+1]);
                count++;
            }
        }
    }
    return count;
}
