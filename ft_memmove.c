void *ft_memmove(void *s1, const void *s2, unsigned n)
{
	int				i;
	unsigned char	tmp[n];

	i = 0;
	while(i < n)
	{
		tmp[i] = ((unsigned char *)s2)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((unsigned char *)s1)[i] = tmp[i];
		i++;
	}
}

#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	s[10] = "HelloWorld";
	
	printf("%s\n", s);

	ft_memmove(s, s + 3, 4);

	printf("%s\n", s);
	write(1, s, 4);
	write(1, "\n", 1);
	
	return (0);
}