unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;
	unsigned int	z;

	s = 0;
	d = 0;
	i = 0;
	while (src[s] != '\0')
		s++;
	while (dest[d] != '\0')
		d++;
	z = d;
	if (size < d)
		return (size + s);
	while ((src[i] != '\0') && (d < (size - 1)))
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (z + s);
}
