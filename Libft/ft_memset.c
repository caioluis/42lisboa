/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluis-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:52:27 by cluis-go          #+#    #+#             */
/*   Updated: 2021/10/20 19:54:44 by cluis-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*dst;

	dst = str;
	i = 0;
	while (i < n)
	{
		*dst = (unsigned char) c;
		dst++;
		i++;
	}
	return (str);
}
