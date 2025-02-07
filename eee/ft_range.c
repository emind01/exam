#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end -start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return res;
}

#include <stdio.h>

int main(void)
{
	int *range = ft_range(3, 5);
	printf("%d,", range[0]);
	printf("%d,", range[1]);
	printf("%d,", range[2]);
	free(range);
	return 0;
}