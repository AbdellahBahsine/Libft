#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int len;
    int i;
    int j;
    j = 0;
    start = 0;
    end = 0;
    i = 0;
    len = ft_strlen(s1);
    while(set[i])
    {
        if (s1[0] == set[i] && start != 1)
            start = 1;
        if(s1[len - 1] == set[i] && end != 1)
            end = 1;
        i++;
    }
    i = 0;
    str = malloc((len - start - end) + 1 * sizeof(char));
    while(i < len)
    {
        if (start == 1 && j == 0)
            j++;
        if (end == 1 && j + 1 == len)
            break;
        str[i] = s1[j++];
        i++;
    }
    str[i] = '\0';
    return (str);
}
