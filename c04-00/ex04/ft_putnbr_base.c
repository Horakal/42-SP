#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len_base(char *base)
{
	int	z;

	z = 0;
	while (base[z] != '\0')
		z++;
	return (z);
}

void	ft_numbers(unsigned int n, char *base)
{
	unsigned int	len;

	len = ft_len_base(base);
	if (n >= len)	
		// Equanto o numero for maior q o tam da base é necessario dividi-lo
		// para que obtenhamos um valor dentro da base. Por exemplo: uma base
		// com 5 caracteres só consiguira printar um numero que seja menor que 5
		ft_numbers(n / len, base);
	ft_putchar(base[n % len]);
}
	36
	7
	1	
int	ft_base(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				validate;
	unsigned int	num;

	validate = ft_base(base);
	if (validate == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			num = (nbr * -1);
		}
		else
			num = (nbr);
		ft_numbers(num, base);
		ft_putchar('\n');
	}
}
