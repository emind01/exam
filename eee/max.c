int max(int *tab, unsigned int len)
{
	if (!tab || len == 0)
		return 0;
	int i = 1;
	int res = tab[0];

	while (i < len)
	{
		if(tab[i] > res)
			res = tab [i];
		i++;
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
    int arr1[] = {3, 7, 2, 9, 5};
    int arr2[] = {-10, -20, -30, -5, -15};
    int arr3[] = {42};  // Single element
    int *arr4 = NULL;   // Null array
    int arr5[] = {};    // Empty array

    printf("Max of arr1: %d\n", max(arr1, 5));   // Expected: 9
    printf("Max of arr2: %d\n", max(arr2, 5));   // Expected: -5
    printf("Max of arr3: %d\n", max(arr3, 1));   // Expected: 42
    printf("Max of arr4: %d\n", max(arr4, 0));   // Expected: INT_MIN
    printf("Max of arr5: %d\n", max(arr5, 0));   // Expected: INT_MIN

    return 0;
}
