/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:48 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 21:51:10 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (!c)
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[5] = "Hello";
	char	*a;
	char	*b;

	a = ft_strrchr(s, 'l');
	b = strrchr(s, 'l');
	printf("ft'l' : %s\n", a);
	printf("or'l' : %s\n\n", b);

	a = ft_strrchr(s, 'x');
	b = strrchr(s, 'x');
	printf("ft'x' : %s\n", a);
	printf("or'x' : %s\n\n", b);

	a = ft_strrchr(s, '\0');
	b = strrchr(s, '\0');
	printf("ft'null' : %s\n", a);
	printf("or'null' : %s\n", b);
	
	return (0);
}
*/