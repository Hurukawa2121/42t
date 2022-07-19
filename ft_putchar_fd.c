/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfurukaw <sfurukaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:17:35 by sfurukaw          #+#    #+#             */
/*   Updated: 2022/07/17 18:18:48 by sfurukaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return ;
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int	fd;

	fd = open("./testfile", O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);
	ft_putchar_fd('A', fd);
	if (close(fd))
		return (1);
	return (0);
}
*/