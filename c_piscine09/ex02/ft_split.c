/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:49:26 by iniinisa          #+#    #+#             */
/*   Updated: 2024/02/01 16:07:14 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_not_splitter(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		++i;
	}
	return (1);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_not_splitter(str[i], charset))
		++i;
	return (i);
}

int	count_strs(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(is_not_splitter(str[i], charset)))
		{
			count++;
			while (str[i] && !(is_not_splitter(str[i], charset)))
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_add_string(char **res, char *str, int i, char *charset)
{
	int		j;

	j = 0;
	res[i] = (char *)malloc((ft_strlen(str, charset) + 1) * sizeof(char *));
	if (!(res[i]))
		return (0);
	while (*str && is_not_splitter(*str, charset))
	{
		res[i][j] = *str;
		++j;
		str++;
	}
	res[i][j] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		success;

	result = (char **)malloc((count_strs(str, charset) + 1) * sizeof(char *));
	if (!(result))
		return (0);
	i = 0;
	while (*str)
	{
		if (is_not_splitter(*str, charset))
		{
			success = ft_add_string(result, str, i, charset);
			if (!(success))
				return (NULL);
			++i;
			while (*str && is_not_splitter(*str, charset))
				str++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}

/*#include <stdio.h>
int main() {
    char *str = "0WBKsq75TuCB5ZpCyaj        qe4Q48kpLAM1NmIj5pFCvB";
    char *charset = "        JAQNB";

    char **result = ft_split(str, charset);
    if (!result)
        return 1;

    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        i++;
    }
    return 0;
}*/
