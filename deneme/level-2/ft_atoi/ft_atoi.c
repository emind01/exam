#include <unistd.h>

int ft_atoi(const char *str)
{
    int i;
    int sgn;
    int nbr;

    sgn = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-') 
           sgn = -1;
        i++;
    }    
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + str[i] - '0';
        i++;
    }
    return (nbr * sgn);
}

#include <stdio.h>

int main()
{
    printf("%d", ft_atoi("    -2 1"));  
}