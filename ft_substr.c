#include <stdlib.h>
unsigned int	ft_strlen(const char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *s, const char *t, size_t n)
{
	size_t	i;

	i = 0;
	while (t[i] && i < n)
	{
		s[i] = t[i];
		i++;
	}
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;

	if (start >= ft_strlen(s) || !len)
	{
		ans = malloc(sizeof(char));
		return (ans);
	}
	ans = malloc(sizeof(char) * len);
	if (!ans)
		return (NULL);
	ans = ft_strncpy(ans, s + start - 1, len);
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;

	a = ft_substr("hello", 2, 3);
	printf("%s\n", a);
	free(a);
	return (0);
}
*/