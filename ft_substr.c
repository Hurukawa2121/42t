/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:53 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 21:52:17 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *s, const char *t, size_t n)
{
	size_t	i;

	i = 0;
	while (t[i] && i < n)
	{
		s[i] = t[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;

	if (start >= (unsigned int)ft_strlen(s) || !len)
	{
		ans = malloc(sizeof(char));
		return (ans);
	}
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	ans = ft_strncpy(ans, s + start, len);
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;
	char	*e;

	a = ft_substr("hello", 2, 2);
	b = ft_substr("hello", 2, 0);
	c = ft_substr("hello", 2, 10);
	d = ft_substr("", 2, 3);
	e = ft_substr("", 0, 3);
	printf("%s\n%s\n%s\n%s\n%s\n", a, b, c, d, e);
	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	return (0);
}
*/