#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
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
