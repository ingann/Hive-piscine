/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:55:12 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/23 19:50:35 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

void	write_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			++j;
		}
		++i;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (ft_strcmp(argv[j - 1], argv[j]) > 0 && j > 1)
		{
			temp = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = temp;
			--j;
		}
		++i;
	}
	write_params(argc, argv);
	return (0);
}
