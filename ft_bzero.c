/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:16:16 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:16:17 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[] = "Hello";
	char b[] = "Hello";
	char c[] = "Hello";
	char d[] = "Hello";

	ft_bzero(a, 3);
	bzero(b, 3);
	printf("ft : %s\n", a);
	printf("or : %s\n\n", b);

	ft_bzero(c, 0);
	bzero(d, 0);
	printf("ft : %s\n", c);
	printf("or : %s\n", d);
	return (0);
}
*/