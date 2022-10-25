/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:13:45 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/25 19:21:15 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!(*lst) || !del)
		return ;
	temp = (*lst);
	while (temp != NULL)
	{
		temp = temp->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
