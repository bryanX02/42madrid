/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:01 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:34:03 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
*ft_memset(void *block, int c, size_t size)
{
	size_t			i;

	if (!block)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(unsigned char*)(block + i) = (unsigned char)c;
		i++;
	}
	return (block);
}
