/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:04:52 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/30 11:06:38 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_dec_twenty_up(char c, t_dict *dct)
{
	if (c == '2')
		ft_print_value("20", dct);
	else if (c == '3')
		ft_print_value("30", dct);
	else if (c == '4')
		ft_print_value("40", dct);
	else if (c == '5')
		ft_print_value("50", dct);
	else if (c == '6')
		ft_print_value("60", dct);
	else if (c == '7')
		ft_print_value("70", dct);
	else if (c == '8')
		ft_print_value("80", dct);
	else if (c == '9')
		ft_print_value("90", dct);
}

void	ft_dec_ten(char c, t_dict *dct)
{
	if (c == '0')
		ft_print_value("10", dct);
	else if (c == '1')
		ft_print_value("11", dct);
	else if (c == '2')
		ft_print_value("12", dct);
	else if (c == '3')
		ft_print_value("13", dct);
	else if (c == '4')
		ft_print_value("14", dct);
	else if (c == '5')
		ft_print_value("15", dct);
	else if (c == '6')
		ft_print_value("16", dct);
	else if (c == '7')
		ft_print_value("17", dct);
	else if (c == '8')
		ft_print_value("18", dct);
	else if (c == '9')
		ft_print_value("19", dct);
}

void	ft_amount(int len, t_dict *dct)
{
	if (len >= 37 && len < 40)
		ft_print_value("1000000000000000000000000000000000000", dct);
	else if (len >= 34 && len < 37)
		ft_print_value("1000000000000000000000000000000000", dct);
	else if (len >= 31 && len < 34)
		ft_print_value("1000000000000000000000000000000", dct);
	else if (len >= 28 && len < 31)
		ft_print_value("1000000000000000000000000000", dct);
	else if (len >= 25 && len < 28)
		ft_print_value("1000000000000000000000000", dct);
	else if (len >= 22 && len < 25)
		ft_print_value("1000000000000000000000", dct);
	else if (len >= 19 && len < 22)
		ft_print_value("1000000000000000000", dct);
	else if (len >= 16 && len < 19)
		ft_print_value("1000000000000000", dct);
	else if (len >= 13 && len < 16)
		ft_print_value("1000000000000", dct);
	else if (len >= 10 && len < 13)
		ft_print_value("1000000000", dct);
	else if (len >= 7 && len < 10)
		ft_print_value("1000000", dct);
	else if (len >= 4 && len < 7)
		ft_print_value("1000", dct);
}
