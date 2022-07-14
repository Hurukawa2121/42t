#include <stdlib.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %s\n", (char *)ft_memchr("Hello", 'l', 10));
	printf("or : %s\n", (char *)memchr("Hello", 'l', 10));
	return (0);
}
*/