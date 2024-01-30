/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:21:44 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/29 15:46:34 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		++min;
		++i;
	}
	*range = arr;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	idx = 0;

	i = ft_ultimate_range(&arr, 1, 10);
	while (idx < i)
	{
		printf("%d\n", arr[idx]);
		++idx;
	}
	printf("%d\n", i);
}*/
