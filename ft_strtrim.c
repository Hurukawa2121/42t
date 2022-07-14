#include <stdlib.h>
size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

unsigned int	ft_set_cmp(const char *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_F_search(const char *s, const char *set)
{
	int	i;

	i = 0;
	while (ft_set_cmp(set, s[i]))
		i++;
	return (i);
}

unsigned int	ft_L_search(const char *s, const char *set)
{
	int	total_dig;

	total_dig = ft_strlen(s) - 1;
	while (total_dig && ft_set_cmp(set, s[total_dig]))
		total_dig--;
	return (total_dig);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*ans;

	start = ft_F_search(s, set);
	end = ft_L_search(s, set) + 1;
	ans = malloc(sizeof(char) * (end - start + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;

	a = ft_strtrim("1234AAAA22341134", "1234");
	printf("%s\n", a);
	free(a);
	return (0);
}
*/