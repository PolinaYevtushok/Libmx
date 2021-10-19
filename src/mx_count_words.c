#include "../inc/libmx.h"

int mx_count_words(const char *str, char c)
{
    if(!str)
        return -1;
    int count = 0;
    int i = 0;
    while(str[i] == c)
        i++;
    for ( ; str[i]; ++i)
    {
        if((str[i] == c && str[i+1] != c) ||
            (str[i] != c && str[i+1] == '\0'))
            ++count;
    }
    return count;
}
