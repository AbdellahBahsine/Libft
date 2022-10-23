/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:28:09 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/23 17:32:58 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*char_b;

	char_b = b;
	i = 0;
	while (i < len)
	{
		char_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
