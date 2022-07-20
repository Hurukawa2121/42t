/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:03:45 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 22:03:46 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
static void ft_initial_upper(void *content)
{
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