#include <stdlib.h>
#include <stdint.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)s;
	while (i < n)
	{
		buf[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;

	if (size > 0 && nmemb > SIZE_MAX / size)
		return (0);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ans = malloc(nmemb * size);
	if (!ans)
		return (NULL);
	ft_bzero(ans, nmemb * size);
	return (ans);
}
/*
#include <stdio.h>
int	main(void)
{
	int *s;

	s = ft_calloc(4, sizeof(char));
	for (int i = 0; i < 4; i++)
		printf("%d\n", s[i]);
	free(s);
	return (0);
}*/