int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("ft : %d\n", ft_isascii('d'));
	printf("or : %d\n\n", isascii('d'));

	printf("ft : %d\n", ft_isascii(128));
	printf("or : %d\n", isascii(128));
	return (0);
}
*/