#include <unistd.h>

int first(char *str, char c, int max)
{
    int i;

    i = -1;
    while(++i < max)
    {
        if (str[i]== c)
            return (0);
    }
    return 1;
}
int main(int ac, char **av)
{
    int i,j;
    i = 0;
    j = 0;

    if (ac == 3)
    {
        while(av[1][i])
        {
            i++;
        }
        while (av[2][j])
        {
            av[1][i] = av[2][j];
            j++;
            i++;
        }
        i = 0;
        while(av[1][i])
       {
            if(first(av[1], av[1][i], i))
                write(1, &av[1][i], 1);
            i++;
       }   
    }   
    write(1, "\n", 1);
}