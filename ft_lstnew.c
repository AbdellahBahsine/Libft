#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *str = (t_list *)malloc(sizeof(t_list)); // sizeof(t_list) means that you tell malloc to allocate memory equal to the size of t_list
    // We typecasted because malloc will return a void pointer but we want a type t_list pointer
    if (!str)
        return NULL;
    str->content = content;
    str->next = NULL;
    return str;
}

// #include <stdio.h>

// int main()
// {
//     t_list *ptr1;
//     ptr1 = ft_lstnew("hello");
//     printf("%s", ptr1->content);
//     printf("%s", ptr1->next);
// }