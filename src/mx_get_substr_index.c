#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{
    if (str == NULL || sub == NULL)
        return -2;
    int start = 0;
    int i = 0;
    int j = 0;
    while(str[start])
    {
        while (str[i] == sub[j])
        {
            ++i;
            ++j;
            if (sub[j] == '\0')
                return start;
        }
        start++;
        i = start;
        j = 0;
    }
    return -1;
}
