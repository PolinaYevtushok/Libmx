#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n)
{
    char *str = (char *) s;
    size_t start = mx_strlen(str) - 1 ;
    size_t finish = mx_strlen(str) - n;
    for (size_t i = start; i > finish; --i)
    {
        if (str[i] == c)
            return &str[i];
        else
            continue;
    }
    return NULL;
}
