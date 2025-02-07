#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int s = 1;
	int res = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			s=-1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return res;
}

int is_prime(int num)
{
	if (num < 2) return 0;
	if (num == 2) return 1;
	if (num%2 == 0) return 0;

	int i = 3;
	while (i*i <= num) 
	{
		if (num%i == 0) return 0;
		i+=2;
	}	
	return 1;
}

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		n = -n;
		write(1, "-",1);
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
}

int main(int ac, char **av)
{
	int sum;

	if (ac == 2)
	{
		int num = ft_atoi(av[1]);
		sum = 0;
		while (num > 0)
		{
			if (is_prime(num))
				sum = sum + num;
			num--;
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n",1);
	return 0;
}