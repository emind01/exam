#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int n1 = atoi(av[1]);
		int n2 = atoi(av[2]);
		int i = 1;
		int x;
		int res = 0;
		if (n1>n2)
			x = n2;
		else
			x=n1;
		while (i<=x)
		{
			if(n1%i==0 && n2%i==0)
				res = i;
			i++;
		}
		printf("%d", res);	
	}
	printf("\n");
	return 0;
}