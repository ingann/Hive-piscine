/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:14:18 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/22 13:19:48 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		str++;
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "kissa";
	printf("%s", str);
	printf("%d", ft_strlen(&str[0]));
}*/
