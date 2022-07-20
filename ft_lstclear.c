/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:53:10 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 18:18:50 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		next_lst = (**lst).next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
}

/*
static void	ft_del(void *content)
{
	content = 0;
	free(content);
}

#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("A");
	t_list	*b = ft_lstnew("B");
	t_list	*c = ft_lstnew("C");

	(*a).next = b;
	(*b).next = c;
	printf("%p\n%p\n%p\n\n", a, b, c);
	ft_lstclear(&b, ft_del);
	printf("%p\n%p\n%p\n", a, b, c);

	free (a);
	return (0);
}
*/