#include <stdlib.h>

unsigned int	ft_strlen(const char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int	cp_size;

	cp_size = ft_strlen(s2);
	if (cp_size > (int) n)
		cp_size = n;
	cp_size--;
	while (cp_size >= 0)
	{
		((unsigned char *)s1)[cp_size] = ((unsigned char *)s2)[cp_size];
		cp_size--;
	}
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello";

	ft_memmove(s1 + 2, s1, 3);
	memmove(s2 + 2, s2, 3);
	printf("ft : %s\n", s1);
	printf("or : %s\n\n", s2);

	strcpy(s1, "Hello");
	strcpy(s2, "Hello");

	ft_memmove(s1 + 2, s1, 0);
	memmove(s2 + 2, s2, 0);
	printf("ft : %s\n", s1);
	printf("or : %s\n", s2);
	return (0);
}
*/