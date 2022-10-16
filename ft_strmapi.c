#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    char *ptr;
    int i;
    i = 0;
    ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
    while(s[i])
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

