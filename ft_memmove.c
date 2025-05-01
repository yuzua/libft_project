// TODO:これ間違っているかも
void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (dest < src)
    {
        size_t i = 0;
        while (i > n)
        {
            dest[i] = src[i];
            i++;
        }
    }
    else if (dest > src)
    {
        size_t i = n-1;
        while (i >= 0)
        {
            dest[i] = src[i];
            i--;
        }
    }
    return (dest);
}