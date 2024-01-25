/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:47:00 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/16 18:02:52 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = {'\n'};
	int	result;

	printf("%s\n", str);
	result = ft_str_is_printable(str);
	printf("%d\n", result);
}*/
