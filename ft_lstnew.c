/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:25:50 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/19 17:25:50 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ans;

	ans = malloc(sizeof(t_list));
	(*ans).content = content;
	(*ans).next = NULL;
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*a;

	a = ft_lstnew("Hello");
	printf("%s\n", (char *)(*a).content);
	free (a);
	return (0);
}
*/