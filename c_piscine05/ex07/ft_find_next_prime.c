/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:49:48 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/24 09:10:00 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	else if (nb == 2)
	{
		return (1);
	}
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(24090356)); 	
}*/
