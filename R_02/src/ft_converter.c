/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:05:46 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/30 11:10:12 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_three_dig(char *nbr, int *i, int *len, t_dict *dct)
{
	char	c[2];

	if (nbr[*i] != '0')
	{
		c[0] = nbr[*i];
		ft_print_value(&c[0], dct);
		ft_print_value("100", dct);
		if (nbr[*i + 1] == '0' && nbr[*i + 2] == '0')
			ft_amount(*len, dct);
	}
	(*i)++;
	(*len)--;
}

void	ft_two_dig(int *i, int *len, char *nbr, t_dict *dct)
{
	if (nbr[*i] >= '2' && nbr[*i] != '\0')
	{
		ft_dec_twenty_up(nbr[*i], dct);
		(*i)++;
		(*len)--;
		if (nbr[*i] == '0')
		{
			ft_amount(*len, dct);
			(*i)++;
			(*len)--;
		}
	}
	if (nbr[*i] == '1' && nbr[*i] != '\0' && *len % 3 == 2)
	{
		ft_dec_ten(nbr[*i + 1], dct);
		(*i) += 2;
		if (*len > 3)
			ft_amount(*len, dct);
		(*len) -= 2;
	}
	if (nbr[*i] == '0' && *len % 3 == 2)
	{
		(*i)++;
		(*len)--;
	}
}

void	ft_one_dig(char *nbr, int *i, int *len, t_dict *dct)
{
	char	c[2];

	if (nbr[*i] != '0' && nbr[*i] != '\0')
	{
		c[0] = nbr[*i];
		ft_print_value(&c[0], dct);
		(*i)++;
		ft_amount(*len, dct);
		(*len)--;
	}
	if (nbr[*i] == '0')
	{
		(*i)++;
		(*len)--;
	}
}

void	ft_converter(char *nbr, t_dict *dct)
{
	int		i;
	int		len;

	i = 0;
	len = check_length(nbr);
	while (nbr[i] != '\0')
	{
		if (len % 3 == 0 && nbr[i] != '\0')
			ft_three_dig(nbr, &i, &len, dct);
		if (len % 3 == 2 && nbr[i] != '\0')
			ft_two_dig(&i, &len, nbr, dct);
		if (len % 3 == 1 && nbr[i] != '\0')
			ft_one_dig(nbr, &i, &len, dct);
	}
}
