/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:09 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 22:26:04 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (src < dst)
	{
		i = 1;
		while (i <= n)
		{
			dst[n - i] = src[n - i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(dst) = *(src);
			dst++;
			src++;
			n--;
		}
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