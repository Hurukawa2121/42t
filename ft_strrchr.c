char	*ft_strrchr(char *s, int c)
{
	int digit;

	digit = 0;
	while (s[digit])
		digit++;
	while(digit >= 0)
	{
		if (s[digit] == c)
			return (s + digit);
		digit--;
	}
	return ('\0');
}

#include<stdio.h>
int	main()
{
	char s[5] = "Hello";
	char *a = ft_strrchr(s, 'l');

    printf("%s\n", s);
    printf("%s\n", a);
    return (0);
}