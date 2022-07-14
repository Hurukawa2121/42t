#include <stdlib.h>
void	ft_strcpy(char *s, const char *t)
{
	int	i;

	i = 0;
	while (t[i] != '\0')
	{
		s[i] = t[i];
		i++;
	}
	s[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ans;

	i = 0;
	while (s[i] != '\0')
		i++;
	ans = malloc(sizeof(char) * (i + 1));
	if (!ans)
		return (0);
	ft_strcpy(ans, s);
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1;
	char *s2;

	s1 = ft_strdup("Hello");
	s2 = ft_strdup("Hello");
	printf("ft : %s\n", s1);
	printf("or : %s\n\n", s2);

	s1 = ft_strdup("");
	s2 = ft_strdup("");
	printf("ft : %s\n", s1);
	printf("or : %s\n", s2);

	free(s1);
	free(s2);
	return (0);
}
*/