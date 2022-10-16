#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t i;
    char *ptr;
    i = 0;
    ptr = malloc((count) * size);
    if (count >= SIZE_MAX || size >= SIZE_MAX)
        return NULL;
    while(i < count)
    {
        ptr[i] = 0;
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
