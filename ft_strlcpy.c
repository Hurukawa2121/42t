#include <stdlib.h>
size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "11111";
	char s2[] = "22222";
	char s3[] = "33333";
	char s4[] = "44444";

	printf("%ld, %s\n", ft_strlcpy(s1, "Hello", 3), s1);
	printf("%ld, %s\n", ft_strlcpy(s2, "Hello", 7), s2);
	printf("%ld, %s\n", ft_strlcpy(s3, "Hello", 1), s3);
	printf("%ld, %s\n", ft_strlcpy(s3, "Hello", 0), s4);
	return (0);
}
*/