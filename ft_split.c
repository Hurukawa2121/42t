/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:18:22 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 18:25:05 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_num_sector(const char *str, char c)
{
	int	sum_sector;
	int	flg_now_sep;

	sum_sector = 0;
	flg_now_sep = 1;
	while (*str)
	{
		if (*str != c && flg_now_sep)
		{
			flg_now_sep = 0;
			sum_sector++;
		}
		else if (*str == c)
			flg_now_sep = 1;
		str++;
	}
	return (sum_sector);
}

static char	*ft_fromS_toF(const char *str, int start, int finish)
{
	int		i;
	char	*sub_str;

	i = 0;
	sub_str = malloc(sizeof(char) * (finish - start + 1));
	while (start + i < finish)
	{
		sub_str[i] = str[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	i_splits;
	int		sub_end;
	char	**splits;

	if (!s || !(splits = malloc((ft_num_sector(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	i_splits = 0;
	sub_end = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && sub_end < 0)
			sub_end = i;
		else if ((s[i] == c || i == ft_strlen(s)) && sub_end >= 0)
		{
			splits[i_splits] = ft_fromS_toF(s, sub_end, i);
			i_splits++;
			sub_end = -1;
		}
		i++;
	}
	splits[i_splits] = 0;
	return (splits);
}
/*
#include <stdio.h>
int	main(void)
{
	char **a;
	const char b[] = "Who are you too?";
	char c = 'o';
	
	a = ft_split(b, c);
	for (int i = 0; i < (int)ft_num_sector(b, c); i++)
	{
		printf("\"%s\"", a[i]);
		if (i + 1 != (int)ft_num_sector(b, c))
			printf(", ");
	}
	printf("\n");
	for (int i = 0; i < (int)ft_num_sector(b, c); i++)
		free(a[i]);
	free(a);
	return (0);
}
*/