void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	d;

	d = 0;
	i = 0;
	while (i < size)
	{
		x = i + 1;
		while (x < size)
		{	
			if (tab[i] > tab[x])
			{
				d = tab[i];
				tab[i] = tab[x];
				tab[x] = d;
			}
			x++;
		}
		i++;
	}	
}
