#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if(!(*lst) || !del)
        return;
    t_list *temp = (*lst);
    while (temp != NULL)
    {
        temp = temp->next;
        ft_lstdelone(*lst, del);
        (*lst) = temp;
    }
}
