int	ft_atoi(char *str)
{
	int		num;
	int		sinal;
	char	*loop;

	num = 0;
	sinal = 1;
	loop = str;
	while (*loop == ' ' || (*loop >= 9 && *loop <= 13))
		loop++;
	while (*loop == '-' || *loop == '+')
	{
		if (*loop == '-')
			sinal *= -1;
		loop++;
	}
	while (*loop >= '0' && *loop <= '9')
	{
		num *= 10;
		num += (int)(*loop - '0');
		loop++;
	}
	return (num * sinal);
}
