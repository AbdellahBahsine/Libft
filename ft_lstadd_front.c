/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:23:53 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/21 15:29:59 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = (*lst);
    (*lst) = new;
}

// #include <stdio.h>

// int main()
// {
//     char *ptr1 ="Head BRO";
//     char *ptr2 ="lst BRO";
//     char *ptr3 = "New BRO";
//     t_list *head = malloc(sizeof(t_list));
//     head->content =ptr1;
//     head->next = NULL;

//     t_list *lst = malloc(sizeof(t_list));
//     lst->content = ptr2;
//     lst->next = NULL;

//     head->next = lst;

//     t_list *new = malloc(sizeof(t_list));
//     new->content =ptr3;
//     new->next = NULL;

//     ft_lstadd_front(head, new);
// }