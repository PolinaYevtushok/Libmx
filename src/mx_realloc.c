#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    if (!ptr)
        return NULL;
    void *new = NULL;
    size_t len = mx_strlen(ptr);
    if (!ptr)
        return malloc(size);
    if (size == 0)
    {
        new = malloc(0);
        if (!new)
            return NULL;
        free(ptr);
        return new;
    }
    if (len > size)
        return ptr;
    else
    {
        new = malloc(sizeof(char) * size);
        if (!new)
            return NULL;
        mx_memcpy(new, ptr, size);
    }
    free(ptr);
    return new;
}
