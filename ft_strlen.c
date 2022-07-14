#include <stdlib.h>
size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %ld\n", ft_strlen("hello"));
	printf("or : %ld\n\n", strlen("hello"));

	printf("ft : %ld\n", ft_strlen(""));
	printf("or : %ld\n", strlen(""));
	return (0);
}
*/