int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('h'));
	printf("%c\n", ft_toupper('?'));
	return (0);
}
*/