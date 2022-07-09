int	ft_atoi(const char *s)
{
    int i;
    int ans;
    int nega_count;

    i = 0;
    ans = 0;
    nega_count = 0;
    while (s[i] == ' ')
        i++;
    while (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            nega_count++;
        i++;
    }
    while ('0' <= s[i] && s[i] <= '9')
    {
        ans = 10 * ans + s[i] - '0';
        i++;
    }
    if (nega_count % 2 == 1)
        ans *= -1;
    return (ans);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n",ft_atoi(" ---+--+1234ab567"));
    printf("%d\n",ft_atoi("   ---+-1234ab567"));
    return 0;
}