#include <stdlib.h>

size_t	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	k;
	size_t	d_dig;
	size_t	s_dig;

	d_dig = ft_strlen(dest);
	s_dig = ft_strlen(src);
	if (size <= d_dig)
		return (size + s_dig);
	k = 0;
	while (src[k] && d_dig + k < size - 1)
	{
		dest[d_dig + k] = src[k];
		k++;
	}
	dest[d_dig + k] = '\0';
	return (s_dig + d_dig);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hello";
	char	c[] = "Hello";
	
	printf("%ld, %s\n", ft_strlcat(a, "World", 6), a);
	printf("%ld, %s\n", ft_strlcat(b, "World", 7), b);
	printf("%ld, %s\n", ft_strlcat(c, "World", 8), c);
	return (0);
}
*/