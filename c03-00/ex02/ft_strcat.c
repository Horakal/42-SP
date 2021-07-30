char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (src[z] != '\0')
	{
		dest[i + z] = src[z];
		z++;
	}
	dest[i + z] = '\0';
	return (dest);
}
