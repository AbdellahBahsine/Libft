/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:13:35 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/26 12:30:55 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	new_list = NULL;
	while (lst != NULL)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
			del(current->content);
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}
