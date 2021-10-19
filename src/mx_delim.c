#include "../inc/libmx.h"

bool mx_delim(char *s, char delim)
{
    int len = mx_strlen(s);
    for (int i = 0; i < len; ++i)
    {
        if(s[i] == delim)
            return 1;
    }
    return 0;
}
