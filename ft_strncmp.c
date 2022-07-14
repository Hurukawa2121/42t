#include <stdlib.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (s1[i - 1] - s2[i - 1]);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %d\n", ft_strncmp("Hello", "HelLO", 4));
	printf("or : %d\n\n", strncmp("Hello", "HelLO", 4));

	printf("ft : %d\n", ft_strncmp("Hello", "HelLO", 10));
	printf("or : %d\n\n", strncmp("Hello", "HelLO", 10));

	printf("ft : %d\n", ft_strncmp("Hello", "HelLO", 0));
	printf("or : %d\n", strncmp("Hello", "HelLO", 0));

	return (0);
}
*/