#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*i;
	int	a;

	if (min >= max)
		return (0);
	a = 0;	
	i = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		i[a] = min;
		min++;
		a++;
	}
	return (i);
}