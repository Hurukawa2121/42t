/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:44 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/20 18:23:30 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static unsigned int	ft_total_digit(int n)
{
	int	i;

	i = 0;
	if (!n)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static unsigned int	ft_specific_digit(int n, int the_dig)
{
	int	tens;

	tens = 1;
	while (the_dig > 1)
	{
		tens *= 10;
		the_dig--;
	}
	n /= tens;
	return (n % 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		dig;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	dig = ft_total_digit(n);
	while (dig)
	{
		c = '0' + ft_specific_digit(n, dig);
		write(fd, &c, 1);
		dig--;
	}
}
/*
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int	fd;

	fd = open("./testfile", O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);
	ft_putnbr_fd(-2147483648, fd);
	if (close(fd))
		return (1);
	return (0);
}
*/