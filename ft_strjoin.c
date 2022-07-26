/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:14 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/21 16:46:22 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ans;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ans = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ans)
		return (NULL);
	i = -1;
	while (s1[++i])
		ans[i] = s1[i];
	j = -1;
	while (s2[++j])
		ans[i + j] = s2[j];
	ans[i + j] = '\0';
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

	a = ft_strjoin("Hello", "World");
	b = ft_strjoin("Hello", "");
	c = ft_strjoin(NULL, "World");
	d = ft_strjoin("", "");
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
	printf("%s\n", d);
	free(a);
	free(b);
	free(c);
	free(d);
	return (0);
}
*/