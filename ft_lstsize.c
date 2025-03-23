#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int ct = 0;
	if (!lst)
		return (ct);
	while (lst)
	{
		ct++;
		lst = lst->next;
	}
	return (ct);
}