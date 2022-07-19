/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:46:41 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 17:46:43 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("ft : %d\n", ft_isalnum('d'));
	printf("or : %d\n\n", isalnum('d'));

	printf("ft : %d\n", ft_isalnum('1'));
	printf("or : %d\n\n", isalnum('1'));
	
	printf("ft : %d\n", ft_isalnum('?'));
	printf("or : %d\n", isalnum('?'));
	return (0);
}
*/