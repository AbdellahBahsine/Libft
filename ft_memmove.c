#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *char_dst;
	const char *char_src;
	char_dst = dst;
	char_src = src;
	if (char_src < char_dst)
	{
		while(len + 1 > 0)
		{
			len--;
			char_dst[len] = char_src[len];	
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}