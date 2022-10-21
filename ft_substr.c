/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:26:32 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/21 10:16:22 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		sub_str = malloc((1) * sizeof(char));
		sub_str[0] = '\0';
		return (sub_str);
	}
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (i < len && s[start])
	{
		sub_str[i] = s[start++];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

#include <stdio.h>

int main()
{
    char * s = ft_substr("tripouille",0 , 42000);
    printf("%s", s);
}
