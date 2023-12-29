/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:01 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/28 12:36:21 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	void	*aux;

	aux = str;
	while (size > 0)
	{
		*(unsigned char *)str = (unsigned char)c;
		str ++;
		size --;
	}
	return (aux);
}
