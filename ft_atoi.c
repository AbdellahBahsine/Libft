/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahsine <abahsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:02:02 by abahsine          #+#    #+#             */
/*   Updated: 2022/10/25 18:55:01 by abahsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	long	result;
	int	sum;

	result = 0;
	i = 0;
	sum = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (result > 2147483647 && sign == 1)
			return (-1);
		else if (result > 2147483648 && sign == -1)
			return (0);
		result = (result * 10) + (str[i++] - 48) * sign;
	}
	return ((int)result);
}
