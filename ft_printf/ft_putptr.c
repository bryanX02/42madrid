/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:43:20 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 15:09:55 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, size_t *counter)
{
	char			*str;
	unsigned long	ptrdir;

	if (ptr == NULL)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	ptrdir = (unsigned long)ptr;
	ft_putstr("0x", counter);
	str = ft_strptr(ptrdir, LOW_HEX);
	ft_putstr(str, counter);
	free(str);
}
