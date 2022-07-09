int ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	printf("%d\n", ft_memcmp("Hello", "Hello", 5));
	printf("%d\n", ft_memcmp("Hello", "HelLo", 5));
	return (0);
}