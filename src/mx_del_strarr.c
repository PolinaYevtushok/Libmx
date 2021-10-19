#include "../inc/libmx.h"

void mx_del_strarr(char ***arr)
{
    if (arr && *arr)
    {
        char **str = *arr;
        while (*str)
            mx_strdel(str++);
        free(*arr);
        *arr = NULL;
    }
}
