/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:18:57 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/21 09:57:54 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = "Hello";
	char *a = ft_strchr(s, 'l');
	char *b = strchr(s, 'l');
	
	printf("ft'l' : %s\n", a);
	printf("or'l' : %s\n\n", b);

	a = ft_strchr(s, 'x');
	b = strchr(s, 'x');
	printf("ft'x' : %s\n", a);
	printf("or'x' : %s\n\n", b);
	
	a = ft_strchr(s, '\0');
	b = strchr(s, '\0');
	printf("ft'null' : %s\n", a);
	printf("or'null' : %s\n", b);
	return (0);
}
*/