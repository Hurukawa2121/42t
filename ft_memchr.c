void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (0);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	printf("%s\n", (char *)ft_memchr("Hello", 'l', 5));
	printf("if nothing : %s\n", (char *)ft_memchr("Hello", 'x', 5));
	return (0);
}