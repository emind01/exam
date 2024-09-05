#include <unistd.h>

char *ft_strrev(char *str)
{
	char temp;
	int length = 0;
	int i = 0;

	while (str[length])
		length++;
	while (i < (length - 1))
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		i++;
		length--;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char s[5] = "abc";
    printf("%s\n", ft_strrev(s));
}