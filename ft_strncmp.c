/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:43 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/21 10:01:23 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %d\n", ft_strncmp("Hello", "HelLO", 4));
	printf("or : %d\n\n", strncmp("Hello", "HelLO", 4));

	printf("ft : %d\n", ft_strncmp("Hello", "HelLO", 10));
	printf("or : %d\n\n", strncmp("Hello", "HelLO", 10));

	printf("ft : %d\n", ft_strncmp("Hello", "HelLO", 0));
	printf("or : %d\n", strncmp("Hello", "HelLO", 0));

	return (0);
}
*/