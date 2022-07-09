int ft_toupper(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('R'));
	return (0);
}