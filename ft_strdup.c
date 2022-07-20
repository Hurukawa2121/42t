/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:06 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 21:46:35 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
static void	ft_strcpy(char *s, const char *t)
{
	int	i;

	i = 0;
	while (t[i])
	{
		s[i] = t[i];
		i++;
	}
	s[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ans;

	i = 0;
	while (s[i])
		i++;
	ans = malloc(sizeof(char) * (i + 1));
	if (!ans)
		return (NULL);
	ft_strcpy(ans, s);
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup("Hello");
	s2 = ft_strdup("Hello");
	printf("ft : %s\n", s1);
	printf("or : %s\n\n", s2);
	s1 = ft_strdup("");
	s2 = ft_strdup("");
	printf("ft : %s\n", s1);
	printf("or : %s\n", s2);
	free(s1);
	free(s2);
	return (0);
}
*/