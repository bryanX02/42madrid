/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:38:12 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/29 15:09:37 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (count && size && count > (4294967295 / size))
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}
