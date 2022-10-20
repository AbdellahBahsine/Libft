/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:23:53 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/20 18:23:54 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    (*lst)->next = new;
}

#include <stdio.h>

int main()
{
    t_list **lst = NULL; 
    t_list *new = NULL;
    (*lst)->content = "heyy";
    ft_lstadd_front(lst, new);

    printf("%s", (*lst)->content);
}