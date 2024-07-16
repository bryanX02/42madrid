/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:33 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/28 12:41:23 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*aux;

	if (!dst && !src)
		return (dst);
	aux = dst;
	while (n > 0)
	{
		*(char *)aux = *(char *)src;
		aux++;
		src++;
		n--;
	}
	return (dst);
}
