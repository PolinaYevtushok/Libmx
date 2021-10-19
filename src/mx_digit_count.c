int mx_digit_count ( int number)
{
    int size;
    for(size = 0; number > 0; ++size)
    {
        number /= 10;
    }
    if(number < 0)
        size ++;
    return size;
}
