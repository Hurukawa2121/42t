char	*ft_strnstr(const char *big, const char *little, unsigned int n)
{
	int	lit_dig;
	int	i;
	int	tmp_i;

	lit_dig = 0;
	while (little[lit_dig])
		lit_dig++;
	i = 0;
	while (i < n)
	{
		tmp_i = 0;
		while (big[i + tmp_i] == little[tmp_i])
			tmp_i++;
		if (tmp_i == lit_dig)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("Hello", "el", 5));
	printf("if nothing : %s\n", ft_strnstr("Hello", "lo", 3));
	return (0);
}