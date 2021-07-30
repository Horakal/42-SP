#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = 0;	
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + a) = min;
		min++;
		a++;
	}
	return (a);
}
