/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:03:19 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/25 13:11:38 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		++i;
		++min;
	}
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	max = 150;
	int	min = 100;
	int	*arr = ft_range(min, max);

	i = 0;
	while (arr[i])
	{
		printf("%d\n", arr[i]);
		++i;
	}
}*/
