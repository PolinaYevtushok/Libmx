#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr)
{
    char *res;
    int size, i;
    unsigned long num = nbr;
    for(size = 0; num > 0; ++size)
    {
        num = num / 16;
    }
    res = (char *) malloc(sizeof(char) * (size+1));
    res[mx_strlen(res) - 1] = '\0';
    for(i = 0; nbr > 0; ++i)
    {
        res[i] = nbr % 16 + (nbr % 16 > 9 ? 87 : 48);
        nbr = nbr /16;
    }
    mx_str_reverse(res);
    return res;
}
