#include "libft.h"

int count_delimiters(char const *s, char c, int len)
{
    int i;
    int sum;
    int is_delimiter;
    is_delimiter = -1;
    sum = 0;
    i = 0;
    while(s[i])
    {
        if (s[i] != c && i < len && is_delimiter < 0)
        {
          sum++;
          is_delimiter = 0;
        } 
        else if (s[i] == c && is_delimiter >= 0)
          is_delimiter = -1;
        i++;
    }
    return (sum);
}

char *split_array(char const *s, int start, int end)
{
    char *ptr;
    int i;
    i = 0;
    ptr = malloc((end - start + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    while(start < end)
    {
        ptr[i] = s[start++];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

char **ft_split(char const *s, char c)
{
    char **res;
    int len;
    int i;
    int j;
    int start;
    if (!s)
        return NULL;
    start = -1;
    i = 0;
    j = 0;
    len = ft_strlen(s);
    res = ft_calloc((count_delimiters(s, c, len) + 1), sizeof(char *));
    if (!res)
        return NULL;
    while(i <= len)
    {
        if (s[i] != c && start < 0)
            start = i;
        else if ((s[i] == c || i == len) && start >= 0)
        {
            res[j++] = split_array(s, start, i);
            start = -1;
        }
        i++;
    }
    return (res);
}