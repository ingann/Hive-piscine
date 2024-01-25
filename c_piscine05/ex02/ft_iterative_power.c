/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:39:32 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/21 16:14:15 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	n = nb;
	while (power > 1)
	{
		nb *= n;
		--power;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2,3)); 
}*/
