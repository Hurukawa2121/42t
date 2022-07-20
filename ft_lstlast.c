/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:10:43 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 22:10:45 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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