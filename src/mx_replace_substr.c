#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    if (!str || !sub || !replace)
        return NULL;
    int start = mx_get_substr_index(str, sub);
    int len_str = mx_strlen(str);
    int len_sub = mx_strlen(sub);
    int len_replace = mx_strlen(replace);
    int count = mx_count_substr(str, sub);
    int len = len_str + count * (len_replace - len_sub);
    if (len_sub <= 0)
        return (char *) str;
    char *new = mx_strnew(len);
    while (start != -1 && start != -2)
    {
        mx_strncat(new, str, start);
        mx_strcat(new, replace);

        str += len_sub + start;
        start = mx_get_substr_index(str, sub);
    }
    mx_strcat(new, str);
    return new;
}
