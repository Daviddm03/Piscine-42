/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:26:03 by ddias-mo          #+#    #+#             */
/*   Updated: 2024/01/23 21:26:05 by ddias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	index;

	index = 0;
	if (nb <= 0)
		return (0);
	if (nb > 0)
	{
		while (index * index < nb)
		{
			index++;
		}
		if (index * index == nb)
			return (index);
	}
	return (0);
}
