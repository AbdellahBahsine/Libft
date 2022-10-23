#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newList;

    newList = NULL;
    while (lst != NULL)
    {
        ft_lstadd_back(&newList, ft_lstnew(f(lst->content)));
        lst = lst->next;
    }
    if (del != NULL)
        del(newList->content);
    return (newList);
}
