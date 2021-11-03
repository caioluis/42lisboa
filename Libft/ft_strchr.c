/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:38:05 by cluis-go          #+#    #+#             */
/*   Updated: 2021/11/03 18:53:59 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((unsigned char) str[i] == (unsigned char) c)
            return ((char *) &str[i]);
        i++;
    }

    return (NULL);
}
