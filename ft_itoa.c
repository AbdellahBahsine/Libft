#include "libft.h"

int count_length(int n)
{
    int i;
    i = 0;
    while(n)
    {
        n = n / 10;
        i++;
    }
    return i;
}

char *is_negative(int n, int temp, int temp2, int len, char *result, int i)
{
    if (n < 0)
    {
        temp2 *= -1;
        result = malloc((len + 2) * sizeof(char));
        while(temp2)
        {
            if(i == 0)
                result[0] = '-';
            else
            {
              temp = temp2 % 10;
              temp2 = temp2 / 10;
              result[len--] = temp + 48;  
            }
          i++;
        }
        result[i] = '\0';
    } 
    else
    {
        result = malloc((len + 1) * sizeof(char));
        while(temp2)
        {
            temp = temp2 % 10;
            temp2 = temp2 / 10;
            result[--len] = temp + 48;
            i++;
        }
        result[i] = '\0';
    }
    return result;
}

char *ft_itoa(int n)
{
    char *result;
    int temp2;
    int temp;
    int len;
    int i;
    i = 0;
    temp = 0;
    temp2 = n;
    result = NULL;
    len = count_length(n);
    if (n == 0)
        return ft_strdup("0");
    if (n == -2147483648)
        return ft_strdup("-2147483648");
    return is_negative(n, temp, temp2, len, result, i);
}

#include <stdio.h>

int main() {

  printf("%s", ft_itoa(457));
}