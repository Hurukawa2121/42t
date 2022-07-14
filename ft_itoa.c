#include <stdlib.h>

unsigned int	ft_signed_digit(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_zero(void)
{
	char	*ans;

	ans = malloc(sizeof(char) * 2);
	if (!ans)
		return (0);
	ans[0] = '0';
	ans[1] = '\0';
	return (ans);
}

char	*ft_itoa_min(void)
{
	char	*ans;
	int		cut_min;
	int		i;

	cut_min = 147483648;
	ans = malloc(sizeof(char) * 11);
	if (!ans)
		return (0);
	ans[0] = '-';
	ans[1] = '2';
	i = 10;
	while (i > 1)
	{
		ans[i] = '0' + cut_min % 10;
		cut_min /= 10;
		i--;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	unsigned int	size;
	char			*ans;

	if (n == 0)
		return (ft_itoa_zero());
	if (n == -2147483648)
		return (ft_itoa_min());
	size = ft_signed_digit(n);
	ans = malloc(sizeof(char) * (size + 1));
	if (!ans)
		return (0);
	if (n < 0)
		ans[0] = '-';
	while (n != 0)
	{
		size--;
		ans[size] = '0' + n % 10;
		n /= 10;
	}
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = ft_itoa(1234567890);
	b = ft_itoa(0);
	c = ft_itoa(-2147483648);
	printf("%s\n%s\n%s\n", a, b, c);
	free(a);
	free(b);
	free(c);
	return (0);
}
*/