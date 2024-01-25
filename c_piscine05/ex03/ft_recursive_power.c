/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:34:53 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/23 19:55:03 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb * (ft_recursive_power(nb, --power)));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(10, 4));	
}*/
