#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const char *char_s1;
	const char *char_s2;
	char_s1 = s1;
	char_s2 = s2;	
	i = 0;
	while(i < n)
	{
		if (char_s1[i] != char_s2[i])
			return ((unsigned char)&s1[i] - (unsigned char)&s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d", ft_memcmp("c", "a", 1));
	printf("%d", memcmp("c", "a", 1));
}