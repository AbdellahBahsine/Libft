/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:39:03 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/25 12:34:13 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*char_dst;
	const char	*char_src;

	char_dst = dst;
	char_src = src;
	if (src == NULL && dst == NULL)
		return (dst);
	if (char_src < char_dst)
	{
		while (len > 0)
		{
			if (len != 0)
				len--;
			char_dst[len] = char_src[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
