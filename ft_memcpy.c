#include <stdlib.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *char_dst;
	const char *char_src;
	i = 0;
	char_dst = dst;
	char_src = src;
	while(i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
}
