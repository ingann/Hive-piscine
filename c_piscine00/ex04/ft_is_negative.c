/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:43:58 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/11 11:35:10 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	posneq;

	if (n < 0)
	{
		posneq = 'N';
	}
	else
	{
		posneq = 'P';
	}
	write(1, &posneq, 1);
}
