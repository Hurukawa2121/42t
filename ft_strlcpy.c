unsigned char	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	int	dest_digit;
	int	i;

	dest_digit = 0;
	while (dest[dest_digit])
		dest_digit++;
	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size > dest_digit)
		dest[i] = '\0';
	return (*dest);
}

#include<stdio.h>
int	main()
{
	char s[6];

	ft_strlcpy(s, "Hello", 3);
    printf("%s\n", s);

	ft_strlcpy(s, "Hello", 7);
    printf("%s\n", s);

    return (0);
}