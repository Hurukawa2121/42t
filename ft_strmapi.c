/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:41 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/22 11:35:12 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	newstr = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	while (str[i] != '\0')
	{
		newstr[i] = f(i, str[i]);
		i++;
	}
	return (newstr);
}
/*
static char	ft_toupper2(unsigned int i, char c)
{
	i++;
	if ('a' <= c && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

#include <stdio.h>
int	main(void)
{
	char	*a;

	a = ft_strmapi("hElLo", ft_toupper2);
	printf("%s\n", a);
	free(a);
	return (0);
}
*/