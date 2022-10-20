/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:54:11 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/20 21:07:36 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*char_s = s;

	i = 0;
	while (i < n)
	{
		if (char_s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
