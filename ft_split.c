#include <stdlib.h>
int	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	**ft_double_pointer_NULL(char **ans)
{
	ans = malloc(sizeof(char *));
	if (!ans)
		return (NULL);
	*ans = malloc(sizeof(char));
	return (NULL);
}

unsigned int	ft_must_mem(const char *a, char c)
{
	int	i;
	int	n;

	if (a[0] == '\0')
		return (0);
	i = 0;
	n = 0;
	while (a[i])
	{
		if (a[i] == c && (i > 0 && a[i - 1] != c))
			n++;
		i++;
	}
	if (a[i - 1] != c)
		n++;
	return (n);
}

char	*ft_strdup_tillc(char *a, const char *b, char c)
{
	int	i;

	i = 0;
	while (b[i] && b[i] != c)
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (!a)
		return (NULL);
	a[i] = '\0';
	while (i > 0)
	{
		i--;
		a[i] = b[i];
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		s_len;
	int		s_num;

	if (*s == '\0' || !ft_must_mem(s, c))
		return (NULL);
	s_len = ft_strlen(s) - 1;
	s_num = ft_must_mem(s, c) - 1;
	ans = malloc(sizeof(char *) * ((s_num + 1)));
	if (!ans)
		return (NULL);
	while (s_len >= 0)
	{
		if ((s_len == 0 || (s_len > 0 && s[s_len - 1] == c)) && s[s_len] != c)
		{
			ans[s_num] = ft_strdup_tillc(ans[s_num], s + s_len, c);
			if (ans[s_num] == NULL)
				return (NULL);
			s_num--;
		}
		s_len--;
	}
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char **a;
	const char b[] = "How Are You?";
	char c = 'o';
	
	a = ft_split(b, c);
	for (int i = 0; i < (int)ft_must_mem(b, c); i++)
	{
		printf("\"%s\"", a[i]);
		if (i + 1 != (int)ft_must_mem(b, c))
			printf(", ");
	}
	printf("\n");
	for (int i = 0; i < (int)ft_must_mem(b, c); i++)
		free(a[i]);
	free(a);
	return (0);
}
*/