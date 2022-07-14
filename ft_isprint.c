int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft : %d\n", ft_isprint('d'));
	printf("or : %d\n\n", isprint('d'));

	printf("ft : %d\n", ft_isprint('\0'));
	printf("or : %d\n", isprint('\0'));
	return (0);
}
*/