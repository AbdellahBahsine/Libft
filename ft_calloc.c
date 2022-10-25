/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:20:38 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/23 19:06:42 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc((count) * size);
	if (!ptr || count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
