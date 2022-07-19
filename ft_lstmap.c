#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	if (!f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f((*lst).content)));
		if (!new_lst)
			ft_lstclear(&new_lst, del);
		lst = (*lst).next;
	}
	return (new_lst);
}
/*
static void *f(void *content)
{
	//*((char *)content) -= 32;
}

static void	del(void *content)
{
	content = 0;
	free(content);
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
	t_list *new = ft_lstmap(a, f, del);
	while (new)
	{
		printf("%s\n", (char *)(*new).content);
		new = (*new).next;
	}
	free (a);
	return (0);
}
*/