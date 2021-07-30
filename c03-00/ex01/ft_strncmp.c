int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	z;
	unsigned char	x;

	i = 0;
	while (s1[i] == s2[i] && n > 0 && s1[i] != '\0')
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
	{
		z = s1[i];
		x = s2[i];
		return (z - x);
	}
}
