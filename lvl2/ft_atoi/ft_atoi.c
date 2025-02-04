int	ft_atoi(char *str)
{
	int i = 0;
	int s = 1;
	int res = 1;

	while(str[i] == 32 || str[i] == 9)
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			s = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (s*res);
}
