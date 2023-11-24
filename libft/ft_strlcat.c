/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:35:18 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:35:20 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *restrict to, const char *restrict from, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(from);
	dest_length = ft_strlen(to);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (from[i] && dest_length + i < size - 1)
		{
			to[j] = from[i];
			j++;
			i++;
		}
		to[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
