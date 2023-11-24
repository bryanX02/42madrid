/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:36:48 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:36:49 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *block, int c, size_t size)
{
	size_t	i;

	if (!block)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (*(unsigned char*)(block + i) == (unsigned char)c)
			return ((void*)(block + i));
		i++;
	}
	return (NULL);
}