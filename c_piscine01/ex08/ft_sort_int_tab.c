/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:48:40 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/15 13:31:22 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	assign_biggest(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size -= 1;
	while (i < size)
	{
		if (tab[i] > tab[size])
		{
			temp = tab[size];
			tab[size] = tab[i];
			tab[i] = temp;
		}
		++i;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		assign_biggest(tab, size);
		--size;
	}
}
