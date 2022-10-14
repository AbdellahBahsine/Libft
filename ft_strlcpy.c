#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
    size_t len;
	i = 0;
	len = ft_strlen(src);
	if ((signed int)dstsize < 0)
		return (len);
	if (dstsize == 0)
      return (len);
	while(i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (len);
}

#include <stdio.h>
#include <string.h>

int main() {
  char dst[10];
  char *src = "hello world";
  printf("%lu", strlcpy(dst, src, -4));
}