#include <stdlib.h>
char	*ft_strrchr(const char *s, int c)
{
	int	digit;

	digit = 0;
	while (s[digit])
		digit++;
	if (c == '\0')
		return ((char *)(s + digit));
	while (digit >= 0)
	{
		if (s[digit] == c)
			return ((char *)(s + digit));
		digit--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[5] = "Hello";
	char *a = ft_strrchr(s, 'l');
	char *b = strrchr(s, 'l');

	printf("ft'l' : %s\n", a);
	printf("or'l' : %s\n\n", b);

	a = ft_strrchr(s, 'x');
	b = strrchr(s, 'x');
	printf("ft'x' : %s\n", a);
	printf("or'x' : %s\n\n", b);

	a = ft_strrchr(s, '\0');
	b = strrchr(s, '\0');
	printf("ft'null' : %s\n", a);
	printf("or'null' : %s\n", b);
	return (0);
}
*/