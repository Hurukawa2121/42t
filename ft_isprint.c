int	ft_isprint(int c)
{
	if (33 <= c && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint('d'));
	return (0);
}