/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:10 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 21:47:46 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
static void	ft_something(unsigned int i, char *c)
{
	char	a;

	a = *c;
	i++;
	if ('a' <= a && a <= 'z')
		a -= 'a' - 'A';
}

#include <stdio.h>
int	main(void)
{
	char	*a;

	a = "hello";
	ft_striteri(a, ft_something);
	printf("%s\n", a);
	return (0);
}
*/