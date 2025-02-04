#include <unistd.h>

int main(int ac, char **av)
{
	int	i = 0;
	int	f = 0;

	if (ac == 2)
	{
		while (av[1][i] == 32 || av[1][i] == 9)
			i++;
		while (av[1][i])
		{
			if(av[1][i] == 32 || av[1][i] == 9)
				f = 1;
			if(!(av[1][i] == 32 || av[1][i] ==9))
			{
				if (f)
					write(1, "   ", 3);
				f = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

