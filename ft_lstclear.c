#include "libft.h"


void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (!*lst)
	{
		lst = NULL;
		return ;
	}
	t_list *current = *lst;
	t_list *tmp;
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}