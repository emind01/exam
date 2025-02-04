char	*ft_strrev(char *str)
{
	int l = 0;
	char i = 0;

	while (str[l])
		l++;
	while (i < l / 2)
	{
		char tmp = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = tmp;
		i++;

	}
	return str;
}	
