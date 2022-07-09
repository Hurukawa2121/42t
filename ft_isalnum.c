int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha('d'));
	printf("%d\n", ft_isalpha('D'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha('?'));
	return (0);
}