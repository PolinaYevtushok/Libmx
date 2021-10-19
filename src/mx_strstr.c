#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    if (haystack == NULL || needle == NULL)
        return NULL;
    int start = 0;
    int i = 0;
    int j = 0;
    while(haystack[start])
    {
        while (haystack[i] == needle[j])
        {
            ++i;
            ++j;
            if (needle[j] == '\0')
                return (char *) &haystack[start];
        }
        start++;
        i = start;
        j = 0;
    }
    return NULL;
}
