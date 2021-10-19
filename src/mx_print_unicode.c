#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c)
{
    if(c < 128)
        write(1, &c, 1);
    else if ( c < 2048)
    {
        char unicode [2];
        unicode[1] = (c & 63) + 128;
        unicode[0] = (c >> 6) + 192;
        write(1, unicode, 2);
    }
    else if ( c < 65536)
    {
        char unicode [3];
        unicode[2] = (c & 63) + 128;
        unicode[1] = ((c & 4032) >> 6)+ 128;
        unicode[0] = (c >> 12) + 224;
        write(1,unicode, 3);
    }
    else 
    {
        char unicode [4];
        unicode[3] = (c & 63) + 128;
        unicode[2] = ((c & 4032) >> 6)+ 128;
        unicode[1] = ((c & 258048) >> 12)+ 128;
        unicode[0] = (c >> 18) + 240;
        write(1,unicode, 4);
    }
}
