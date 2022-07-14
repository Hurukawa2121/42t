#include <stdlib.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)s;
	while (i < n)
	{
		buf[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[] = "Hello";
	char b[] = "Hello";
	char c[] = "Hello";
	char d[] = "Hello";

	ft_bzero(a, 3);
	bzero(b, 3);
	printf("ft : %s\n", a);
	printf("or : %s\n\n", b);

	ft_bzero(c, 0);
	bzero(d, 0);
	printf("ft : %s\n", c);
	printf("or : %s\n", d);
	return (0);
}
*/