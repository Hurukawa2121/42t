#include <stdlib.h>
unsigned int	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while(a[i])
		i++;
	return (i);
}

unsigned int	ft_L_cmp(const char *s1, const char *set, const int s1_dig, const int set_dig)
{
	int	i;

	i = 0;
	while (i < set_dig)
	{
		if (s1[s1_dig - 1 - i] != set[set_dig - 1 - i])
			return (1);
		i++;
	}
  	return (0);
}

unsigned int	ft_F_cmp(const char *s1, const char *set, const int set_dig)
{
	int	i;

	i = 0;
	while (i < set_dig)
	{
		if (s1[i] != set[i])
			return (1);
		i++;
	}
  	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		set_dig;
	int		i;
	char	*ans;

	start = 0;
	end = ft_strlen(s1);
	set_dig = ft_strlen(set);
	if (!ft_L_cmp(s1, set, end, set_dig))
		end = end - set_dig;
	if (!ft_F_cmp(s1, set, set_dig))
		start = start + set_dig;
	ans = malloc(sizeof(char) * (end - start));
	i = 0;
	while (start + i < end)
	{
			ans[i] = s1[start + i];
			i++;
	}
	ans[i] = '\0';
	return (ans);
}

#include <stdio.h>
int main()
{
	char *a;

	a = ft_strtrim("xxxHelloxxx", "xxx");
	printf("%s\n", a);
	free(a);
	return 0;
}
