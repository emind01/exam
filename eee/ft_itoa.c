#include <stdlib.h>

char *ft_itoa(int nb)
{
    int len = 0;
    long n_tmp = nb;
    char *str;

    if (nb == -2147483648)
        return ("-2147483648");
    if (nb == 0)
    {
        str = (char *)malloc(sizeof(char) * 2);
        if (!str)
            return NULL;
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    if (nb < 0)
    {
        len++;
        nb = -nb;
    }
    n_tmp = nb;
    while (n_tmp)
    {
        n_tmp /= 10;
        len++;
    }
    str = (char *)malloc((sizeof(char)) * (len + 1));
    if (!str)
        return NULL;
    
    str[len] = '\0';

    while (nb)
    {
        str[--len] = (nb % 10) + '0';
        nb /= 10;
    }

    if (len > 0)
        str[0] = '-';

    return str;
}

#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_itoa(153));
    printf("%s\n", ft_itoa(-153));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(INT_MAX));
    return 0;
}
