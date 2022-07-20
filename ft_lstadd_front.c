# include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			(*new).next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("Hello");
	t_list	*b = ft_lstnew("World");

	ft_lstadd_front(&b, a);
	while (a)
	{
		printf("%s\n", (char *)(*a).content);
		a = (*a).next;
	}
	free (a);
	free (b);
	return (0);
}
*/