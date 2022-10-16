#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t src_len;
	size_t dst_len;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dst_len)
	return (src_len + dstsize);
	while(src[i] && i <= dstsize - dst_len - 1)
	{
		dst[dst_len++] = src[i];
		i++;
	}
	dst[dst_len] = '\0';
	return (src_len + dstsize - 1);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
  char dst[30];
  char dst2[30];
	char * src = (char *)"AAAAAAAAA";
  ft_strlcat(dst, src, 6);
  strlcat(dst2, src, 6);
  printf("Mine: %s\n", dst);
  printf("Mine: %lu\n", ft_strlcat(dst, src, 6));
  printf("Original: %s\n", dst2);
  printf("Original: %lu\n", strlcat(dst2, src, 6));
}
*/