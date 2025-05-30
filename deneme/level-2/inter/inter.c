#include <unistd.h>

int check_l(char *str, char c, int len)
{
    int i;

    i = 0;
    while(i < len)
    {
        if(str[i] == c)
            return (0);
        i++; 
    }
    return (1);
}

int check_s(char *str, char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (check_l(argv[1], argv[1][i], i) && check_s(argv[2], argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}