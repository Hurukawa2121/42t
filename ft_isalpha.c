int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("ft : %d\n", ft_isalpha('d'));
	printf("or : %d\n\n", isalpha('d'));

	printf("ft : %d\n", ft_isalpha('?'));
	printf("or : %d\n", isalpha('?'));
	return (0);
}*/