#include <unistd.h>

void    str_capitalizer(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && 'z' >= str[i])
        str[i] -= 32;
    write(1, &str[i], 1);
    while(str[++i])
    {
        if (str[i] >= 'A' && 'Z' >= str[i])
            str[i] += 32;
        if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1]== '\t' ))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
}

int main(int ac, char **av)
{
    int i;

    if(ac < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while(i < ac)
        {
            str_capitalizer(av[i]);
            write(1, "\n", 1);
            i+=1;
        }
    }
    return 0;
}