#include <stdlib.h>
char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	l_dig;
	size_t	i;
	size_t	tmp_i;

	if (*l == '\0')
		return ((char *)b);
	l_dig = 0;
	while (l[l_dig])
		l_dig++;
	i = 0;
	while (i < n)
	{
		tmp_i = 0;
		while (b[i + tmp_i] == l[tmp_i])
			tmp_i++;
		if (tmp_i == l_dig)
			return ((char *)(b + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft : %s\n", ft_strnstr("Hello", "el", 10));
	printf("ft : %s\n", ft_strnstr("Hello", "lo", 3));
	printf("ft : %s\n", ft_strnstr("Hello", "lo", 0));
	printf("ft : %s\n", ft_strnstr("Hello", "", 0));
	return (0);
}
*/