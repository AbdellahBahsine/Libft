#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	char *char_b;
	size_t i;
	char_b = b;
	i = 0;
	while(i < len)
	{
		char_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
