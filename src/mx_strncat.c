#include "../inc/libmx.h"

char *mx_strncat(char *restrict s1, const char *restrict s2, int len)
{
    int len1 = mx_strlen(s1);
    int i, j;
    for (i = len1, j = 0; j < len; ++i, ++j)
        s1[i] = s2[j];
    s1[i] = '\0';
    return s1;
}
