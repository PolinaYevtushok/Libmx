#include "../inc/libmx.h"

char **mx_strsplit (const char *s, char c)
{
    if (s == NULL)
        return NULL;
    int arr_size = mx_count_words(s,c);
    char **arr = (char **) malloc(sizeof(char *) * (arr_size + 1));
    int word_num = 0;
    int len = 0;
    int i;
    for( i = 0; word_num < arr_size; word_num++)
    {
        while (s[i] == c)
            ++i;
        while (s[i] != c && s[i] != '\0')
        {
            ++len;
            ++i;
        }
        arr[word_num] = mx_strndup(&s[i - len], len);
        len = 0;
    }
    arr[arr_size] = NULL;
    return arr;
}
