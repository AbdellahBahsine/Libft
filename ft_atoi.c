int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	result = 0;
	i = 0;
	sign = 1;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48) * sign;
		i++;
	}
	return result;
}