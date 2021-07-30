#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}	
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}	
	if (nb > 9)
	{	
		ft_putnbr(nb / 10);
	}
	ft_putchar(48 + nb % 10);
}
