/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:26:32 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/27 10:32:22 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	length;

	if (!s)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	if (start >= length)
	{
		sub_str = ft_calloc(1, sizeof(char));
		if (!sub_str)
			return (NULL);
		return (sub_str);
	}
	if (len > length - start)
		sub_str = ft_calloc((length - start + 1), sizeof(char));
	else
		sub_str = ft_calloc((len + 1), sizeof(char));
	if (!sub_str)
		return (NULL);
	while (i < len && s[start])
		sub_str[i++] = s[start++];
	return (sub_str);
}
