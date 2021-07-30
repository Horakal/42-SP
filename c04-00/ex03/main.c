#include <stdio.h>

int	ft_atoi(char *str);

int main()
{
	char teste[] = " ---+--+1234ab567";
	int z;
	z = ft_atoi(teste);
	printf("%d", z);
}