#include<stdlib.h>
void    ft_strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while(t[i] != '\0')
    {
        s[i] = t[i];
        i++;
    }
}

char    *ft_strdup(char *s)
{
	int     i;
    char    *ans;

    i = 0;
    while(s[i] != '\0')
        i++;
    ans = malloc(sizeof(char) * (i + 1));
    if (!ans)
        return (0);
    ft_strcpy(ans, s);
	return (ans);
}

#include<stdio.h>
int	main(void)
{
    char *s;
    
	s = ft_strdup("Hello");
	printf("%s\n", s);
	free(s);
    return (0);
}