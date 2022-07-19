/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:09 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/18 15:51:54 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int	cp_size;
	int	cp_limit;

	if ((unsigned char *)s1 == (unsigned char *)s2 || !n)
		return (s1);
	cp_size = (int)ft_strlen(s2);
	cp_limit = (int)ft_strlen(s1);
	if (cp_size > (int)n)
		cp_size = n;
	if (cp_size > cp_limit)
		cp_size = cp_limit;
	cp_size--;
	while (cp_size >= 0)
	{
		((unsigned char *)s1)[cp_size] = ((unsigned char *)s2)[cp_size];
		cp_size--;
	}
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello";

	ft_memmove(s1 + 2, s1, 3);
	memmove(s2 + 2, s2, 3);
	printf("ft : %s\n", s1);
	printf("or : %s\n\n", s2);

	strcpy(s1, "Hello");
	strcpy(s2, "Hello");

	ft_memmove(s1 + 2, s1, 0);
	memmove(s2 + 2, s2, 0);
	printf("ft : %s\n", s1);
	printf("or : %s\n", s2);

	ft_memmove(s1, s1, 2);
	memmove(s2, s2, 2);
	printf("ft : %s\n", s1);
	printf("or : %s\n", s2);
	return (0);
}
*/