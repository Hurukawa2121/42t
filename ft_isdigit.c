int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("ft : %d\n", ft_isdigit('1'));
	printf("or : %d\n\n", isdigit('1'));

	printf("ft : %d\n", ft_isdigit('d'));
	printf("or : %d\n", isdigit('d'));
	return (0);
}
*/