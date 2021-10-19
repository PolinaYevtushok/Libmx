#include "../inc/libmx.h"

char *mx_strnew (const int size)
{
    char *str = NULL;
    if(size < 0)
        return NULL;
    if (! (str = (char *) malloc (sizeof(char) * (size + 1))))
        return NULL;
    for (int i = 0; i < size; i++)
    {
        str[i] = '\0';
    }
    return str;
}
