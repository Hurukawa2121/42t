int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii('d'));
	printf("%d\n", ft_isascii('?'));
	printf("%d\n", ft_isascii('\n'));
	return (0);
}