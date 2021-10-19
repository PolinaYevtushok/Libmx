int mx_sqrt(int x)
{
    int i;
    if ( x == 1)
         return 1;
    for( i = 0; i <= x / 2; ++i)
    {
        if ( i * i == x)
            return i;  
    }
    return 0;
}
