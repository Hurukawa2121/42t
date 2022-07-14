void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void	ft_something(unsigned int i, char *c)
{
	char a = *c;
	i++;
	if ('a' <= a && a <= 'z')
		a -= 'a' - 'A';
}

#include <stdio.h>
int	main(void)
{
	char *a = "hello";

	ft_striteri(a, ft_something);
	printf("%s\n", a);
	return (0);
}
*/