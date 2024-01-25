/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:02:55 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/17 18:44:58 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		++i;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[30] = "hi";
	char	src[] = " my name is";
	printf("%s", ft_strcat(&dest[0], &src[0]));
}*/
