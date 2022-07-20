/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:21 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 21:49:00 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "11111";
	char s2[] = "22222";
	char s3[] = "33333";
	char s4[] = "";
	char s5[] = "55555";

	printf("%ld, %s\n", ft_strlcpy(s1, "Hello", 3), s1);
	printf("%ld, %s\n", ft_strlcpy(s2, "Hello", 7), s2);
	printf("%ld, %s\n", ft_strlcpy(s3, "", 1), s3);
	printf("%ld, %s\n", ft_strlcpy(s4, "Hello", 1), s4);
	printf("%ld, %s\n", ft_strlcpy(s5, "Hello", 0), s5);
	return (0);
*/