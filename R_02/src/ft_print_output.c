/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:47:48 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/30 11:07:17 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
	{
		i = i + 1;
	}
	return (p1[i] - p2[i]);
}

char	*ft_get_value(char *key, t_dict *dct)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (ft_strcmp(dct[i].nb, key) == 0)
		{
			return (dct[i].val);
		}
		++i;
	}
	return (0);
}

void	ft_print_value(char *key, t_dict *dct)
{
	char	*value;

	value = ft_get_value(key, dct);
	while (*value != '\0')
	{
		write(1, value, 1);
		value = value + 1;
	}
	write(1, " ", 1);
}
