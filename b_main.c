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

	//printf("%s\n", (char *)test->content);
	//t_list *test = NULL;

	printf("_____________\n");

	t_list *test = ft_lstnew("icho");
	t_list *a = ft_lstnew("el moudden");
	t_list *b = ft_lstnew("tijani");
	t_list *c = ft_lstnew("ikidr");
	//printf("address of test: %p\n", test);

	ft_lstadd_front(&test, a);
	ft_lstadd_front(&a, b);
	ft_lstadd_front(&b, c);
	//printf("address of test: %p\n", c->next->next->next);

	print_list(c);

	int re = ft_lstsize(a);
	printf("list size: %d\n", re);

	t_list *last = ft_lstlast(test);
	printf("last node: %s\n", (char *)last->content);

	return (0);
}