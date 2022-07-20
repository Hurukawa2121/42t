#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && (*lst).next)
		lst = (*lst).next;
	return (lst);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("Hello");
	t_list	*b = ft_lstnew("Hello");
	t_list	*c = ft_lstnew("Hello");
	(*a).next = b;
	(*b).next = c;
	printf("%p\n", (*ft_lstlast(a)).next);
	printf("%p\n", ft_lstlast(NULL));
	free (a);
	free (b);
	free (c);
	return (0);
}
*/