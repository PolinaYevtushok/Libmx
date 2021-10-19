#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2)
{
    if (!s1)
        return (char *) s2;
    if (!s2)
        return (char *) s1;
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    int len = len1 + len2;
    char *new = mx_strnew(len);
    if (!new)
        return NULL;
    for (int i = 0; i < len1; ++i)
        new[i] = s1[i];
    for (int j = len1, a = 0; j < len; ++a, ++j)
        new[j] = s2[a];
    new[len] = '\0';
    return new;
}

