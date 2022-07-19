#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)((*lst).content);
		lst = (*lst).next;
	}
}
/*
void ft_initial_upper(void *content)
{
	//*((char *)content) -= 32;
}

#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("hello");
	t_list	*b = ft_lstnew("this");
	t_list	*c = ft_lstnew("world");

	(*a).next = b;
	(*b).next = c;
	printf("%s\n", (char *)(*a).content);
	printf("%s\n", (char *)(*b).content);
	printf("%s\n\n", (char *)(*c).content);
	ft_lstiter(a, ft_initial_upper);
	printf("%s\n", (char *)(*a).content);
	printf("%s\n", (char *)(*b).content);
	printf("%s\n", (char *)(*c).content);

	free (a);
	return (0);
}
*/