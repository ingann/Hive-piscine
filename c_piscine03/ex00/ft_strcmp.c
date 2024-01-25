/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:03:28 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/19 10:30:05 by iniinisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (*us1 == *us2 && *us1 != '\0' && *us2 != '\0')
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "koir";
	char	s2[] = "koira";
	int	result = ft_strcmp(&s1[0], &s2[0]);
   	printf("%d", result);	
}*/
