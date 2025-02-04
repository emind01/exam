#include <unistd.h>

int ft_atoi(char *s)
{
    int res = 0;
    while(*s)
        res = res *10 + *s++ - '0';
    return res;
}

int ft_prime(int n)
{
    int i = 2;

    if (n <= 1)
        return 0;
    while(i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return (i);
}

int put_nbr(int n)
{
    if (n >= 10)
        put_nbr(n/10);
    char digit = n % 10 + '0';
    write(1, &digit, 1);
}

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        int sum = 0;

        while(nbr >0 )
        {
            if (ft_prime(nbr))
                sum+=nbr;
            nbr--;
        }
        put_nbr(sum);
    }
    if(ac != 2)
        put_nbr(0);

    write(1, "\n", 1);
    return 0;
}

