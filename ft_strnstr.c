#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	i = 0;
	if(ft_strlen(needle) == 0)
		return ((char *)haystack);
	while(i < len)
	{
		j = 0;
		while(haystack[i + j] == needle[j])
		{
			if(needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}