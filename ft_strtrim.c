/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:50 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/19 11:59:40 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set_cmp(const char *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*ans;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_set_cmp(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_set_cmp(set, s[end - 1]))
		end--;
	ans = malloc(sizeof(char) * (end - start + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
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

	a = ft_strtrim("1234AAAA22341134", "1234");
	b = ft_strtrim("123422341134", "1234");
	c = ft_strtrim("", "1234");
	d = ft_strtrim("1234AAAA22341134", "");
	printf("%s\n%s\n%s\n%s\n", a, b, c, d);
	free(a);
	free(b);
	free(c);
	free(d);
	return (0);
}
*/