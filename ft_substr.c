#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub_str;
    size_t i;
    i = 0;
    sub_str = malloc(len + 1 * sizeof(char));
    while(i < len)
    {
        sub_str[i] = s[start];
        start++;
        i++;
    }
    sub_str[i] = '\0';
    return (sub_str);
}