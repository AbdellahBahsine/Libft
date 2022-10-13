#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int i;
    int len;
    char *ptr;
    i = 0;
    len = ft_strlen(s1);
    ptr = malloc(len + 1 * sizeof(char));
    if(!ptr)
        return NULL;
    while(s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}