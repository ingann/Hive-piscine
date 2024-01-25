/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:54:36 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/24 08:52:27 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
}

/*int	main(void)
{
    int    nb = -2147483648;
    ft_putnbr(nb);
}*/
