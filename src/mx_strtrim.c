#include "../inc/libmx.h"

char *mx_strtrim(const char *str)
{
    if(!str)
        return NULL;
    int str_len = mx_strlen(str);
    int start = 0;
    int i, j;
    for (i = 0; mx_isspace(str[i]); ++i);
    for (j = str_len - 1; mx_isspace(str[j]); --j);
    int trim_len = j + 1;
    char *trim = mx_strnew(trim_len);
    if(!trim)
        return NULL;
    while(i < trim_len)
    {
        trim[start] = str[i];
        ++start;
        ++i;
    }
    trim[trim_len] = '\0';
    return trim;
}
