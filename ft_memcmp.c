/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:06 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:17:24 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	if (i == n)
		i--;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %d\n", ft_memcmp("Hello", "HelLo", 3));
	printf("or : %d\n\n", memcmp("Hello", "HelLo", 3));
	printf("ft : %d\n", ft_memcmp("Hello", "HelLo", 4));
	printf("or : %d\n\n", memcmp("Hello", "HelLo", 4));
	printf("ft : %d\n", ft_memcmp("Hello", "HelLo", 0));
	printf("or : %d\n\n", memcmp("Hello", "HelLo", 0));
	printf("ft : %d\n", ft_memcmp("Hello", "HelLo", 10));
	printf("or : %d\n", memcmp("Hello", "HelLo", 10));
	return (0);
}
*/