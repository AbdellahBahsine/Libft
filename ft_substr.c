#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if(!s)
        return NULL;
    char *sub_str;
    size_t i;
    i = 0;
    if (start >= ft_strlen(s))
    {
        sub_str = malloc((1) * sizeof(char));
        sub_str[0] = '\0';
        return (sub_str);
    }
    sub_str = malloc((len + 1) * sizeof(char));
    if (!sub_str)
        return NULL;
    while(i < len && s[start])
    {
        sub_str[i] = s[start++];
        i++;
    }
        sub_str[i] = '\0';
    return (sub_str);
}
