#include <stdlib.h>
size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ans;

	ans = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!ans)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ans[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ans[i + j] = s2[j];
		j++;
	}
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;

	a = ft_strjoin("Hello", "World");
	printf("%s\n", a);
	free(a);
	return (0);
}
*/