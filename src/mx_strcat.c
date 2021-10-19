#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2)
{
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    int i, j;
    for ( i = len1, j = 0; j < len2; ++i, ++j )
        s1[i] = s2[j];
    s1[i] = '\0';
    return s1;
}
