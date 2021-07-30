void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	z;

	i = 0;
	while (i < size)
	{
		z = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = z;
		i++;
		size--;
	}	
}
