/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:41:19 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 14:41:24 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexptr(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_strptr(num, base);
	ft_putstr(str, counter);
	free(str);
}
