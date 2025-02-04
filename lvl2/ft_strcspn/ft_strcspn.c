#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t c = 0;

	while (*s)
	{
		while(reject[i] && *s != reject[i])
			i++;
		if(reject[i] != "\0")
			return c;
		i = 0;
		c++;
		s++;
	}
	return c;
}
