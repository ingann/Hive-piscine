/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:28:20 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/23 17:58:41 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] == 127)
		{
			return (0);
		}
		i++;
	}
	while (base[i] != '\0')
	{
		++i;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	long	nb;
	int		baselen;

	baselen = valid_base(base);
	if (baselen >= 2)
	{
		nb = (long) nbr;
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= baselen)
		{
			ft_putnbr_base(nb / baselen, base);
		}
		c = base[nb % baselen];
		ft_putchar(c);
	}
}

/*int main(void)
{
	int num;
	num =  -2147483648;
	ft_putnbr_base(num, "012345A789ABCDEF");
}*/
