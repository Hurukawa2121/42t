/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:19:55 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 20:32:03 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_tolower('R'));
	printf("%c\n", ft_tolower('?'));
	return (0);
}
*/