#include "../inc/libmx.h"

char *mx_file_to_str(const char *file)
{
	if (!file)
		return NULL;
    char c;
    int len = 0;
    int fd = open(file, O_RDONLY);
    if (fd == -1)
        return NULL;
    while (read(fd, &c, 1) > 0)
        len++;
    if ((close(fd)) == -1)
        return NULL;
    if ((fd = open(file, O_RDONLY)) == -1)
        return NULL;
    char text[len + 1];
    read(fd, text, len);
    text[len] = '\0';
    char *str = mx_strdup(text);
    return str;
}
