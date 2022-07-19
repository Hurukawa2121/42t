/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:46:57 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 17:46:58 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	i;
	int	ans;
	int	flg_sign;

	i = 0;
	ans = 0;
	flg_sign = 0;
	while (s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			flg_sign++;
		i++;
	}
	while ('0' <= s[i] && s[i] <= '9')
	{
		ans = 10 * ans + s[i] - '0';
		i++;
	}
	if (flg_sign)
		ans *= -1;
	return (ans);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("ft : %d\n", ft_atoi("-2147483648"));
	printf("or : %d\n\n", atoi("-2147483648"));

	printf("ft : %d\n", ft_atoi("   +1234ab567"));
	printf("or : %d\n\n", atoi("   +1234ab567"));

	printf("ft : %d\n", ft_atoi(" -+1234ab567"));
	printf("or : %d\n\n", atoi(" -+1234ab567"));

	printf("ft : %d\n", ft_atoi("0010"));
	printf("or : %d\n\n", atoi("0010"));

	printf("ft : %d\n", ft_atoi("   -2222222222"));
	printf("or : %d\n\n", atoi("   -2222222222"));

	printf("ft : %d\n", ft_atoi("f6789"));
	printf("or : %d\n", atoi("f6789"));

	return (0);
}
*/