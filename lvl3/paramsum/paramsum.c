#include <unistd.h>

void    put_nbr(int n)
{
    char digit;

    if (n >= 10)
        put_nbr(n/10);
    digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int main(int ac, char **av)
{
    (void)av;

    put_nbr(ac -1);
    write(1, "\n", 1);
    return 0; 
}