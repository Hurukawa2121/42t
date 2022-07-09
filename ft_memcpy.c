void *ft_memcpy(void *s1, const void *s2, unsigned n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		i++;
	}
}

#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	a[5] = "11111";
	char	b[5] = "World";

	printf("%s\n", a);
	write(1, a, 5);

	ft_memcpy(a, b, 3);

	printf("\n%s\n", a);
	write(1, a, 5);
	printf("\n");
	return (0);
}