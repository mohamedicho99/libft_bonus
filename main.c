#include "libft.h"

void ft_delete(void *content)
{
	printf("%s cleared!\n", (char *)content);
}

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


	t_list *test = ft_lstnew("icho");
	t_list **head = &test;
	t_list *a = ft_lstnew("el moudden");
	t_list *b = ft_lstnew("tijani");
	t_list *c = ft_lstnew("ikidr");
	t_list *j = ft_lstnew("karima agadir");
	//printf("address of test: %p\n", test);

	ft_lstadd_front(head, a);
	ft_lstadd_front(head, b);
	ft_lstadd_front(head, c);
	//printf("address of test: %p\n", c->next->next->next);

	//print_list(c);
	//printf("_____________\n");

	ft_lstadd_back(head, j);

	t_list *last = ft_lstlast(test);
	//printf("last node: %s\n", (char *)last->content);
	printf("_____________\n");

	// delete a node
	//ft_lstdelone(j, ft_delete);

	print_list(*head);
	ft_lstclear(head, ft_delete);

	return (0);
}