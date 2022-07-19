#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = (*lst).next;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*a, *b, *c;

	a = ft_lstnew("Hello");
	b = ft_lstnew("Hello");
	c = ft_lstnew("Hello");
	(*a).next = b;
	(*b).next = c;
	printf("%d\n", ft_lstsize(a));
	free (a);
	free (b);
	free (c);
	return (0);
}
*/