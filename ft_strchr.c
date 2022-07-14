#include <stdlib.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[5] = "Hello";
	char *a = ft_strchr(s, 'l');
	char *b = strchr(s, 'l');

	printf("ft'l' : %s\n", a);
	printf("or'l' : %s\n\n", b);

	a = ft_strchr(s, 'x');
	b = strchr(s, 'x');
	printf("ft'x' : %s\n", a);
	printf("or'x' : %s\n\n", b);

	a = ft_strchr(s, '\0');
	b = strchr(s, '\0');
	printf("ft'null' : %s\n", a);
	printf("or'null' : %s\n", b);
	return (0);
}
*/