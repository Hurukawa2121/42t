/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:04:58 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 22:04:59 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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