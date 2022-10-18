#include "libft.h"

int set_start(char const *s1, char const *set)
{
    int i;
    int j;
    int start;
    start = 0;
    i = 0;
    j = 0;
    while(s1[j])
    {
        while(set[i])
        {
            if (s1[j] == set[i])
            {
                start += 1;
                i = 0;
                break;
            }
            i++;
        }
        if (set[i] == '\0')
            break;
        j++;
    }
    return (start);
}

int set_end(char const *s1, char const *set, int len)
{
    int i;
    int end;
    end = 0;
    i = 0;
    while(len > 0)
    {
        while(set[i])
        {
            if (s1[len - 1] == set[i])
            {
                end += 1;
                i = 0;
                break;
            }
            i++;
        }
        if (set[i] == '\0')
            break;
        len--;
    }
    return (end);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int len;
    int i;
    int j;
    i = 0;
    j = 0;
    start = 0;
    end = 0;
    len = ft_strlen(s1);
    start = set_start(s1, set);
    if (start != len)
        end = set_end(s1, set, len);
    str = malloc(((len - start - end) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while(i < len && s1[j])
    {
        while (start > j)
            j++;
        if (len == i + end + start)
            break;
        str[i] = s1[j++];
        i++;
    }
    str[i] = '\0';
    return (str);
}

