#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;
    while(lst->next != NULL)
        lst = lst->next;
    return lst;
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

//     t_list *test = ft_lstlast(head);

//     printf("%s", test->content);
// }