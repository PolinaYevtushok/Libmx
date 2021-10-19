 #include "../inc/libmx.h"

int mx_quicksort(int *arr, int left, int right)
{
    if (!arr)
        return -1;
    if (left >= right)
        return 0;

    int pivot = right;
    int swap = 0;
    int i = left;

    for (int j = left; j < right; ++j)
    {
        if (arr[j] <= arr[pivot])
        {
            if (i != j)
            {
                mx_swap_int(&arr[i], &arr[j]);
                ++swap;
            }
            ++i;
        }
    }
    if (i != pivot)
    {
        mx_swap_int(&arr[i], &arr[pivot]);
        ++swap;
    }
    swap += mx_quicksort(arr, left, i - 1);
    swap += mx_quicksort(arr, i + 1, right);
    return swap;
}
