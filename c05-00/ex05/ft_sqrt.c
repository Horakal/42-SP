int	ft_sqrt(int nb)
{
	int	a;

	if (nb == 1)
		return (1);
	a = 2;
	while (a * a <= nb && a <= 46340)
	{
		if ((a * a) == nb)
			return (a);
		a++;
	}
	return (0);
}
