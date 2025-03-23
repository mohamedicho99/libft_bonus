#include "libft.h"

void print_list(t_list *f_node)
{
	if (!f_node)
		return ;
	while (f_node)
	{
		printf("%s\n", (char *)f_node->content);
		f_node = f_node->next;
	}
}

int main(void)
{
	t_list *test = ft_lstnew("icho");

	//printf("%s\n", (char *)test->content);
	//t_list *test = NULL;

	printf("_____________\n");

	t_list *one = ft_lstnew("el moudden");

	ft_lstadd_front(&test, one);

	print_list(one);

	int re = ft_lstsize(one);
	printf("list size: %d\n", re);

	printf("last node: ", (char *)last->content);

	return (0);
}