/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:44:03 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 14:44:05 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunint(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_strptr(num, "0123456789");
	ft_putstr(str, counter);
	free(str);
}
