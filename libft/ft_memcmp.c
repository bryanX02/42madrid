/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:37:06 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:37:07 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *a1, const void *a2, size_t size)
{
	size_t			i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char*)(a1 + i) != *(unsigned char*)(a2 + i))
			return (*(unsigned char*)(a1 + i) - *(unsigned char*)(a2 + i));
		i++;
	}
	return (0);
}