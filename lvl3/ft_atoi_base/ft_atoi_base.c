#include <unistd.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return c;
}

int	get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base - 1 + '0';
	else
		max_digit = digits_in_base - 10 - 1 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return c - '0';
	else if (c >= 'a' && c<= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else 
		return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int s = 1;
	int digit;

	if (str == NULL || str_base < 2 || str_base >16)
	       return 0;
	
	if (*str == '-')
	{
		s = -1;
		++str;
	}	

	while (*str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if (digit == -1)
			break;
		res = res * str_base + digit;
		++str;
	}
	return (res * s);
}

#include <stdio.h>

int main() {
	printf("Result: %d\n", ft_atoi_base("1A", 16)); // 26
	printf("Result: %d\n", ft_atoi_base("-101", 2)); // -5
	printf("Result: %d\n", ft_atoi_base("  +7B", 16)); // 123
	printf("Result: %d\n", ft_atoi_base("zzz", 36)); // 46655
	return 0;
}
