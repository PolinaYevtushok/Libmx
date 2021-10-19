#include "../inc/libmx.h"

char *mx_itoa (int number)
{
    int i = 0;
    int size;

    if (number == -2147483648)
    {
        size = 9;
        char *string = mx_strnew(size);
        mx_strcpy(string, "-2147483648");
        return (string);
    }
    if (number == 0)
    {
        char *string = mx_strnew(1);
        mx_strcpy(string, "0");
        return (string);
    }
    int n = mx_abs(number);
    size = mx_digit_count(number);
    char *string = mx_strnew(size);
    string[i] = '\0';
    
    while(n)
    {
        int element = n % 10;
        string[i++] = element + 48;
        n /= 10;
    }
    if (number < 0)
        string[i++] = '-';
    mx_str_reverse(string);
    return string;
}
