int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	int sum;
	result = 0;
	i = 0;
	sum = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		if (sum > 10 && sign == -1)
			return (0);
		else if (sum > 10 && sign == 1)
			return (-1);
		result = (result * 10) + (str[i] - 48) * sign;
		i++;
		sum++;
	}
	return result;
}

