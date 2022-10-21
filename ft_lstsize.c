#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while(lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

// #include <stdio.h>

// int main()
// {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = "head";
//     head->next = NULL;

//     t_list *lst = malloc(sizeof(t_list));
//     lst->content = "lst";
//     lst->next = NULL;

//     head->next = lst;

//     t_list *lst2 = malloc(sizeof(t_list));
//     lst2->content = "lst2";
//     lst2->next = NULL;

//     lst->next = lst2;

//     printf("%d", ft_lstsize(head));
// }