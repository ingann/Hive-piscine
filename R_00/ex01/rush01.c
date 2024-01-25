/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaavila <opaavila@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:27:01 by opaavila          #+#    #+#             */
/*   Updated: 2024/01/13 15:56:57 by opaavila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int square_number, int width)
{
	while (square_number < width)
	{
		if (square_number == 0)
		{
			ft_putchar('/');
		}
		else if (square_number == width - 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		square_number++;
	}
}

void	last_line(int square_number, int width)
{
	while (square_number < width)
	{
		if (square_number == 0)
		{
			ft_putchar('\\');
		}
		else if (square_number == width - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		square_number++;
	}
}

void	middle(int square_number, int width)
{
	while (square_number < width)
	{
		if (square_number == 0 || square_number == width - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		square_number++;
	}
}

void	print_line(int row_number, int width, int height)
{
	int	square_number;

	square_number = 0;
	if (row_number == 0)
	{
		first_line(square_number, width);
	}
	else if (row_number == height - 1)
	{
		last_line(square_number, width);
	}
	else
	{
		middle(square_number, width);
	}
}

void	rush(int x, int y)
{
	int	row_number;

	row_number = 0;
	while (row_number < y)
	{
		print_line(row_number, x, y);
		if (row_number < y - 1)
		{
			ft_putchar('\n');
		}
		row_number++;
	}
}
