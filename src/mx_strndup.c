#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n)
{
    char *s2 = mx_strnew((int) n);
    mx_strncpy(s2, s1, n);
    return s2;
}
