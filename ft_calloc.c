#include<stdlib.h>
void	ft_bzero(void *s, unsigned n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
    void    *ans;

    if (nmemb == 0 || size == 0)
    {
        nmemb = 1;
        size = 1;
    }
    ans = malloc(nmemb * size);
    if (!ans)
        return (ans);
    ft_bzero(ans, nmemb * size);
    return (ans);
}

#include<stdio.h>
int	main(void)
{
    int *s;
    
	s = ft_calloc(4, sizeof(char));
    for (int i = 0; i < 4; i++)
	    printf("%d\n", s[i]);
	free(s);
    return (0);
}