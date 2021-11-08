/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:57:37 by cluis-go          #+#    #+#             */
/*   Updated: 2021/11/08 16:11:03 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (str1[i] < str2[i])
            return (-1);
        else if (str1[i] > str2[i])
            return (1);
        i++;
    }
    return (0);
}
