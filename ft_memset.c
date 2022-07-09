void	*ft_memset(void *s, int c, unsigned n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	char	a[5] = "Hello";
	
	printf("%s\n", a);

	ft_memset(a, '1', 5);

	printf("%s\n", a);
	return (0);
}