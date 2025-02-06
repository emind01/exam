#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
				c = av[1][i] - 'A' + 1;
			else if (av[1][i] >= 97 && av[1][i] <= 122)
				c = av[1][i] - 'a' + 1;
			else 
				c = 1;
			while (c--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}