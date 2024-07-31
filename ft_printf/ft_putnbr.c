/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:43:03 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 14:43:06 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, size_t *fd)
{
	unsigned int	digit;

	if (nb < 0)
	{
		ft_putchar('-', fd);
		digit = (unsigned int)(nb * -1);
	}
	else
		digit = (unsigned int)nb;
	if (digit >= 10)
		ft_putnbr(digit / 10, fd);
	ft_putchar((char)(digit % 10 + 48), fd);
}
