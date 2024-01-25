/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:58:00 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/20 17:47:22 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	search;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		search = 0;
		while (str[i + search] == to_find[search])
		{
			if (to_find[search + 1] == '\0')
			{
				return (str + i);
			}
			search++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "abcdefghijk";
	char	to_find[] = "abc";
	printf("%s\n", ft_strstr(str, to_find));
   printf("%s\n", strstr(str, to_find));	
}*/
