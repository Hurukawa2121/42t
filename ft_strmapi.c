/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:41 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/22 10:11:38 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	int		i;

	if (!s || !f)
		return (NULL);
	ans = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ans)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = f(i, '\0');
	return (ans);
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