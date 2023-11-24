/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:38:12 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:38:19 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
	size_t  ite;
	char    *c;

	if (s)
	{

		ite = 0;

		while (ite < n)
		{
			c = s + ite;
			*c = 0;
			ite++;
		}
	}
}

// ¿Nombre de los parametros?
void    *ft_calloc(size_t count, size_t eltsize)
{
	void	*ptr;

	ptr = (void*)malloc(count * eltsize);

	if (!ptr)
		return (NULL);

	ft_bzero(ptr, count);
	return (ptr);
}
