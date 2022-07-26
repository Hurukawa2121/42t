/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:13 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:17:21 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (s1);
	i = 0;
	while (i < n)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		i++;
	}
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a1[] = "11111";
	char a2[] = "11111";
	char b[] = "World";

	ft_memcpy(a1, b, 3);
	memcpy(a2, b, 3);
	printf("ft : %s\n", a1);
	printf("or : %s\n\n", a2);

	memset(a1, '1', 5);
	memset(a2, '1', 5);

	printf("ft : %s\n", (char *)ft_memcpy(a1, b, 0));
	printf("or : %s\n", (char *)memcpy(a2, b, 0));
	return (0);
}
*/