int ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('h'));
	return (0);
}