#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex)
{
    if (!hex)
        return 0;
    unsigned long  num = 0;
    int val;
    int len = mx_strlen(hex);
    len--;
    for(int i = 0; hex[i] != '\0'; ++i)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            val = hex[i] - 48;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            val = hex[i] - 97 + 10;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            val = hex[i] - 65 + 10;
        else
            val = 0;
        num = num + val * mx_pow(16, len);
        len--;
    }
    return num;
}
