/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:47:32 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 13:48:42 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putunint(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_hexptr(va_arg(va, unsigned int), counter, LOW_HEX);
		else
			ft_hexptr(va_arg(va, unsigned int), counter, UP_HEX);
	}
	else if (*str == '%')
		ft_putchar(*str, counter);
}

int	ft_printf(char const *str, ...)
{
	va_list		va;
	size_t		cont;

	if (!str)
		return (0);
	cont = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &cont);
		}
		else
			ft_putchar(*str, &cont);
		str++;
	}
	va_end(va);
	return (cont);
}
