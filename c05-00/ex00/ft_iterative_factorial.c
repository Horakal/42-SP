int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (a != 0)
		{
			nb = nb * a;
			a--;
		}
		return (nb);
	}
}
