#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    char *b = (char *) big;
    char *l = (char *) little;
    if ( big_len == 0 || little_len == 0 || little_len > big_len)
        return NULL;
    int start = 0;
    int i = 0;
    int j = 0;
    while(b[start])
    {
        while (b[i] == l[j])
        {
            ++i;
            ++j;
            if (l[j] == '\0')
                return (char *) &b[start];
        }
        start++;
        i = start;
        j = 0;
    }
    return NULL;

}
