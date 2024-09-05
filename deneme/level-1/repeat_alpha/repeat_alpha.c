#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int r;

    i = 0;
    r = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                r = argv[1][i] - 'a' + 1;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                r = argv[1][i] - 'A' + 1;
            else
                write(1, &argv[1][i], 1);
            while (r)
            {
                write(1, &argv[1][i], 1);
                r--;
            }
            i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}