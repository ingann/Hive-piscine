/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:11:02 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/24 11:01:37 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * src_len);
	if (dest == '\0')
		return (NULL);
	return (ft_strcpy(dest, src));
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strdup("nnbbbhhhh"));
	printf("%s\n", strdup("nnbbbhhhh"));	
}*/
