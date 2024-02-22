/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/02/14 20:26:54 by ddias-mo            #+#    #+#           */
/*   Updated: 2024/02/14 20:26:54 by ddias-mo           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int size;
    int *result;

    if (min >= max)
        return NULL;
    size = max - min;
    result = malloc(size * sizeof(int));
    if (!result)
        return NULL;
    i = 0;
    while (i < size)
    {
        result[i] = min + i;
        i++;
    }
    return (result);
}