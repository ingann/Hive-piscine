/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:07:22 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/21 13:33:17 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "koira121";
	char	s2[] = "koiea131";
	int	result = ft_strncmp(s1, s2, 7);
   	printf("%d\n", result);
	printf("%d", strncmp(s1, s2, 7));
}*/
