#include <unistd.h>

void pnbr(int n)
{
	char b[10] = "0123456789";

	if (n > 9)
		pnbr(n/10);
	write (1, &b[n%10], 1);

}


int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			pnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return 0;


}
