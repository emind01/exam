#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int f = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				f=1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if(f)
					write(1, " ", 1);
				f = 0;
				write(1, &av[1][i], 1);
			} 
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}