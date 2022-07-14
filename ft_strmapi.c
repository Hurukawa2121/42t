#include <stdlib.h>
size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	int		i;

	ans = malloc(sizeof(char) * ft_strlen(s));
	if (!ans)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	return (ans);
}
/*
char	ft_toupper(unsigned int i, char c)
{
	i++;
	if ('a' <= c && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

#include <stdio.h>
int	main(void)
{
	char	*a;

	a = ft_strmapi("hElLo", ft_toupper);
	printf("%s\n", a);
	free(a);
	return (0);
}
*/