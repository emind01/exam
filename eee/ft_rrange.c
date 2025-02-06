#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int step = 1;
	int n = end - start;
	int *range;

	if (n<0)
		n = n * -1;
	range = (int *)malloc(sizeof(int) * (n + 1));
	if (range)
	{
		if (start < end)
			step = -1;
		while (i<n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
		
	}
	return range;
}

#include <stdio.h>

int main(void)
{
	int *range = ft_rrange(3, 5);
	for (size_t i = 0; i < 5-3+1; i++)
	{
		printf("%d ", range[i]);
	}
	return 0;
}