#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *s = (char *) src;
    char *d = (char *) dst;
    for (size_t i = 0; i < n; ++i)
        d[i] = s[i];
    return d;
}
