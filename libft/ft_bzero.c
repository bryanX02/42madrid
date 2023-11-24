/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:18 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/24 14:58:50 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *block, size_t size)
{
	size_t	ite;
	char	*c;

	if (block)
	{
		ite = 0;
		while (ite < size)
		{
			c = block + ite;
			*c = 0;
			ite++;
		}
	}
}
