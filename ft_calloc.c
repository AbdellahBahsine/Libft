#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t i;
    char *ptr = malloc(count * size);
    i = 0;
    while(i < count)
    {
        ptr[i] = 0;
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
