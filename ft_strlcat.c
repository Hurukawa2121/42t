unsigned int	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while(a[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	d_dig;
	unsigned int	s_dig;

	d_dig = ft_strlen(dest);
	s_dig = ft_strlen(src);
	if (size <= d_dig)
		return (size + s_dig);
	k = 0;
	while (src[k] && k < size - d_dig - 1)
	{
		dest[d_dig + k] = src[k];
		k++;
	}
	dest[k + d_dig] = '\0';
	return (s_dig + d_dig);
}

#include <stdio.h>
int	main(void)
{
	char 	*a = "Hello";
	char 	*b = "Hello";

	printf("%d\n", ft_strlcat(a, "World", 6));
	printf("%d\n", ft_strlcat(b, "World", 7));
	return (0);
}