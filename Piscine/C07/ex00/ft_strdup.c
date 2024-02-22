/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-mo <marvin@student.42.fr>            +#+  +:+        +#+       */
/*                                                +#+#+#+#+#+     +#+         */
/*   Created: 2024/02/14 15:16:05 by ddias-mo            #+#    #+#           */
/*   Updated: 2024/02/14 15:16:05 by ddias-mo           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;

    while(str[len])
    {
        len++;
    }
    return (len);
}

char *ft_strdup(char *src)
{
    char *dup;
    int i = 0;

    if (!(dup = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return NULL;
    while (*src)
        dup[i++] = *src++;
    dup[i] = '\0';
    return (dup);
}