#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	while (*s1==*s2++)
		s1++;
	if (*s1=='\0')
		write(1, "1", 1);
	else 
		write(1, "0", 1);

}

int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1],av[2]);
	write(1, "\n", 1);
	return 0;
}