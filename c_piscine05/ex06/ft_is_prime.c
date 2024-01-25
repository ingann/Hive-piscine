/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:26:27 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/24 09:06:57 by iniinisa         ###   ########.fr       */
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

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(11));
}*/
