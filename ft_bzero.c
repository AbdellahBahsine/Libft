#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	char *char_s;
	char_s = s;
	i = 0;
	while(i < n)
	{
		char_s[i] = 0;
		i++;
	}
}
