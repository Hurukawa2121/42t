int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("ft : %d\n", ft_isalnum('d'));
	printf("or : %d\n\n", isalnum('d'));

	printf("ft : %d\n", ft_isalnum('1'));
	printf("or : %d\n\n", isalnum('1'));

	printf("ft : %d\n", ft_isalnum('?'));
	printf("or : %d\n", isalnum('?'));
	return (0);
}
*/