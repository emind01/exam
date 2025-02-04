#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t c = 0;

	while(*s)
	{
		while(accept[i] && *s != accept[i])
			i++;
		if(accept[i] == '\0')
			return c;
		i = 0;
		c++;
		s++;
	}
	return c;
}
