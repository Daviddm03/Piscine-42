/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:44:15 by ddias-mo          #+#    #+#             */
/*   Updated: 2024/01/20 15:44:17 by ddias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
		{
			if (to_find[a + 1] == '\0')
			{
				return (&str[i]);
			}
			a++;
		}
		i++;
	}
	return (0);
}
