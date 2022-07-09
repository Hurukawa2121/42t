char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}

#include<stdio.h>
int	main()
{
	char s[5] = "Hello";
	char *a = ft_strchr(s, 'l');

    printf("%s\n", s);
    printf("%s\n", a);
    return (0);
}