/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:33:04 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/25 12:42:22 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	size_t		length;
	const char	*char_src;
	char		*char_dst;

	i = 0;
	length = 0;
	char_dst = dst;
	char_src = src;
	if (src == NULL && dst == NULL)
		return (dst);
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
}
