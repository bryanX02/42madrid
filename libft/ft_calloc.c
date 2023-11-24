/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:38:12 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/24 15:14:34 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t eltsize)
{
	void	*ptr;

	ptr = (void *) malloc (count * eltsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
