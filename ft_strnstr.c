/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:46 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/19 11:19:24 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	l_siz;
	size_t	i;
	size_t	tmp_i;
	char	*b_notconst;

	l_siz = 0;
	while (l[l_siz])
		l_siz++;
	b_notconst = (char *)b;
	if (!l_siz || b_notconst == l)
		return (b_notconst);
	i = 0;
	while (b_notconst[i] && i < n)
	{
		tmp_i = 0;
		while (b_notconst[i + tmp_i] == l[tmp_i])
		{
			tmp_i++;
			if (!b_notconst[i + tmp_i] || !l[tmp_i])
				break ;
		}
		if (tmp_i == l_siz && i + tmp_i < n)
			return (b_notconst + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %s\n", ft_strnstr("Hello", "el", 10));
	printf("ft : %s\n", ft_strnstr("Hello", "lo", 3));
	printf("ft : %s\n", ft_strnstr("Hello", "lo", 0));
	printf("ft : %s\n", ft_strnstr("Hello", "", 10));
	printf("ft : %s\n", ft_strnstr("", "l", 10));
	printf("ft : %s\n", ft_strnstr("", "", 10));
	return (0);
}
*/