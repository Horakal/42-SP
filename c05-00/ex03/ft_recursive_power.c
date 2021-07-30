int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (a * ft_recursive_power(a, power - 1));
	else
		return (a);
}
