/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:16:36 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:16:47 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("ft : %d\n", ft_isascii('d'));
	printf("or : %d\n\n", isascii('d'));
	
	printf("ft : %d\n", ft_isascii(128));
	printf("or : %d\n", isascii(128));
	return (0);
}
*/