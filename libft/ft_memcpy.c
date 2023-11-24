/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:33 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:34:36 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict to, const void *restrict from, size_t size)
{
	size_t	i;

	if (!to)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(char*)(to + i) = *(char*)(from + i);
		i++;
	}
	return (to);
}