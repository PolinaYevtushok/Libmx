#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str)
{
    if(!str)
        return NULL;
    int i = 0;
    int j = 0;
    int char_count = 0;
    char *tmp = mx_strtrim(str);
    if(!tmp)
        return NULL;
    int space_count = mx_count_words(str,' ') - 1;
    for(int a = 0; tmp[a] != '\0'; ++a)
    {
        if(!mx_isspace(tmp[a]))
            char_count++;
    }
    int len = char_count + space_count + 1;
    char *new = mx_strnew(len);
    if(!new)
        return NULL;
    while(i < len)
    {
        while(mx_isspace(tmp[j] ) && mx_isspace(tmp[j+1]))
            ++j;
        if(mx_isspace(tmp[j]))
        	new[i] = ' ';
        else
        	new[i] = tmp[j];
        ++i;
        ++j;
    }
    new[len] = '\0';
    free(tmp);
    return new;

}
