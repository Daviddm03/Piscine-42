/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <marvin@student.42.fr>             +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+     +#+         */
/*   Created: 2024/02/15 21:51:54 by ddias-mo            #+#    #+#           */
/*   Updated: 2024/02/15 21:51:54 by ddias-mo           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;
    int *result;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    size = max - min;
    result = malloc(size * sizeof(int));
    if (!result)
    {
        *range = NULL;
        return (-1);
    }
    i = 0;
    while (i < size)
    {
        result[i] = min + i;
        i++;
    }
    *range = result;
    return (size);
}