/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:01:25 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 22:01:28 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && *lst)
		(*ft_lstlast(*lst)).next = new;
	else
		*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("Hello");
	t_list	*b = ft_lstnew("World");
	t_list	*c = ft_lstnew("Success");

	ft_lstadd_back(&a, c);
	printf("%s\n", (char *)(*ft_lstlast(a)).content);
	ft_lstadd_back(&b, NULL);
	printf("%s\n", (char *)(*ft_lstlast(b)).content);
	free (a);
	free (b);
	free (c);
	return (0);
}
*/