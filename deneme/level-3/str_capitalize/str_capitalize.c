#include <unistd.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; 
        i++;
    }
    return str;
}

void ft_strcapitalize(char *str)
{
    int i = 0;
    int flag = 1; 

    ft_strlowcase(str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (flag)
            {
                str[i] = str[i] - 32; 
                flag = 0;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
        i++;
    } 
    
    write(1, str, i);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    int j = 1;

    if (argc < 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        while (argv[j])
        {
            ft_strcapitalize(argv[j]);
            j++;
        }
    }
    return 0;
}
