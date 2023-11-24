/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:48 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:34:50 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
*ft_memmove(void *to, const void *from, size_t size)
{
	int	i;

	if (!to || !from)
		return (NULL);
	if (to > from)
	{
		i = (int)size - 1;
		while (i >= 0)
		{
			*(char*)(to + i) = *(char*)(from + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)size)
		{
			*(char*)(to + i) = *(char*)(from + i);
			i++;
		}
	}
	return (to);
}