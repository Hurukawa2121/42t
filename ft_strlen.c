/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:24 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:19:25 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %ld\n", ft_strlen("hello"));
	printf("or : %ld\n\n", strlen("hello"));

	printf("ft : %ld\n", ft_strlen(""));
	printf("or : %ld\n", strlen(""));
	return (0);
}
*/