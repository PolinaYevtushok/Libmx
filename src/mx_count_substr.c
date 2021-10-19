#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub)
{
    if (str == NULL || sub == NULL)
        return -1;
    if(!mx_strlen(sub))
        return 0;
    int start = 0;
    int i = 0;
    int j = 0;
    int count = 0;
    while(str[start])
    {
        while (str[i] == sub[j])
        {
            ++i;
            ++j;
            if (sub[j] == '\0')
                count++;
        }
        start++;
        i = start;
        j = 0;
    }
    return count;
}

