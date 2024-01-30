/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:26:09 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/29 16:58:28 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*cat_strings(char **strs, int size, char *sep)
{
	char	*arr;
	int		i;
	int		length;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		++i;
	}
	length += (size -1) * ft_strlen(sep) + 1;
	arr = malloc(sizeof(char) * length);
	if (!arr)
		return (NULL);
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		++i;
	}
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		length;

	if (size == 0)
	{
		arr = malloc(sizeof(char));
		if (!arr)
			return (NULL);
		*arr = '\0';
		return (arr);
	}
	arr = cat_strings(strs, size, sep);
	return (arr);
}

#include <stdio.h>

int main(void)
{
	char	*strings[] = {"Hello", "world", "from", "ft_strjoin!"};
	char	*separator = " ";
	char	*result = ft_strjoin(4, strings, separator);

    if (result != NULL)
    {
		printf("%s\n", result);
	}
	return 0;
}
