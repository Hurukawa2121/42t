int	ft_toupper(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('R'));
	printf("%c\n", ft_toupper('?'));
	return (0);
}
*/