/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:38:42 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/17 18:45:46 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (*src != '\0' && n < nb)
	{
		dest[i] = *src;
		src++;
		++n;
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[30] = "hi";
	char	src[] = " my name is";
	printf("%s", ft_strncat(&dest[0], &src[0], 7));
}*/
