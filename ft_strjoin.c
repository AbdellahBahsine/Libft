#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str_join;
    size_t len;
    size_t i;
    size_t j;
    j = 0;
    i = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    str_join = malloc(len + 1 * sizeof(char));

    while(s1[i])
    {
        str_join[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        str_join[i++] = s2[j];
        j++;
    }
    str_join[i] = '\0';
    return (str_join);
}

#include <stdio.h>

int main()
{
    printf("%s", ft_strjoin("John", " Doe"));
}