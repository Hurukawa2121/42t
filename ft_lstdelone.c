/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:18:02 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 18:19:24 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)((*lst).content);
	free(lst);
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

	(*a).next = b;
	printf("%p\n", (*a).next);
	ft_lstdelone(b, ft_del);
	printf("%p\n\n", (*a).next);

	free (a);
	return (0);
}
*/