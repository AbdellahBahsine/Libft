#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	size_t len;
	len = ft_strlen(dst);
	i = 0;
	while(src[i] && i < dstsize)
	{
		dst[len + i] = src[i];
		i++;
	}
	return len + i;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char dst[10] = "bro ";
    char *src = "hello";
	strlcat(dst, src, 5);
    printf("%s", dst);
}