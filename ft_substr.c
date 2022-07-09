char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	i;;

	i = 0;
	while (s[i])
	{
		if (((unsigned char *)s)[i] == start)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_substr("hello", 'e', 5));
	return (0);
}
