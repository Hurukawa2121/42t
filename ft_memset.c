/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:16 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:17:17 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)s;
	while (i < n)
	{
		buf[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[];
	char	b[];

	a[] = "Hello";
	b[] = "Hello";
	ft_memset(a, '2', 3);
    memset(b, '2', 3);
    printf("ft : %s\n", a);
    printf("or : %s\n\n", b);
	printf("ft : %s\n", (char *)ft_memset("Hello", '2', 0));
	printf("or : %s\n", (char *)memset("Hello", '2', 0));
	return (0);
}
*/