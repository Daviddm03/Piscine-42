/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:05:23 by ddias-mo          #+#    #+#             */
/*   Updated: 2024/01/15 16:05:29 by ddias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab [i] > tab [i + 1])
			{
				swap = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
