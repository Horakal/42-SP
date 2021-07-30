char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (nb > 0 && src[z] != '\0')
	{
		dest[i + z] = src[z];
		nb--;
		z++;
	}
	dest[i + z] = '\0';
	return (dest);
}
