#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t i;
    char *ptr;
    i = 0;
    ptr = malloc((count) * size);
    if (!ptr || count >= SIZE_MAX || size >= SIZE_MAX)
            return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}
