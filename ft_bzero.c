void	ft_bzero(void *s, unsigned n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	char	a[5] = "Hello";
	
	printf("%s\n", a);

	ft_bzero(a, 5);

	printf("%s\n", a);
	return (0);
}