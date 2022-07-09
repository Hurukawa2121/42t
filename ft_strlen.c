unsigned int	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while(a[i])
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strlen("hello"));
	return (0);
}