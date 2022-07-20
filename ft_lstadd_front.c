/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:05:50 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 22:05:52 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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