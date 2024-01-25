/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:53:15 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/22 13:24:20 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	which_sign(int minus)
{
	int	sign;

	sign = 1;
	if (minus % 2 != 0)
		sign = -1;
	return (sign);
}

int	spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		++i;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	minus_amount;
	int	i;

	result = 0;
	i = spaces(&str[0]);
	minus_amount = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			++minus_amount;
		}
		++i;
	}
	sign = which_sign(minus_amount);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (sign * (str[i] - 48));
		++i;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "   ---+-+-2147483648ab567";
	printf("%d", ft_atoi(&str[0]));
}*/
