/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:41 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/22 11:44:22 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
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