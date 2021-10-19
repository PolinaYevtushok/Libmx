#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len)
{
    char *s = (char *) src;
    char *temp = mx_strdup(s);
    char *d = (char *) dst;
    for (size_t i = 0; i < len; ++i)
    {
        d[i] = temp[i];
    }
    mx_strdel(&temp);
    return d;
}
