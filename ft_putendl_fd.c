#include <unistd.h>

size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!*s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;

	fd = open("./testfile", O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);
	ft_putendl_fd("Hello", fd);
	if (close (fd))
		return (1);
	return (0);
}
*/