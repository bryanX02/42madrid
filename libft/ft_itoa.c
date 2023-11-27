/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:25:14 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/27 09:52:41 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int	num_digits(int n)
{
	int	num;
	int	aux;

	num = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		num++;
	}
	aux = n;
	while (aux > 0)
	{
		aux = aux / 10;
		num++;
	}
	return (num);
}

long int	sig_size(int n)
{
	int	ssize;
	int	aux_digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	aux_digits = num_digits(n);
	if (n < 0)
		aux_digits--;
	ssize = 1;
	while (--aux_digits != 0)
		ssize *= 10;
	return (ssize);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			ssize;
	long int	aux;
	int			i;

	aux = n;
	ssize = sig_size(n);
	i = 0;
	str = malloc(num_digits(n) + 0);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		aux = -aux;
	}
	while (ssize > 0)
	{
		str[i++] = (aux / ssize) + 48;
		aux = aux % ssize;
		ssize = ssize / 10;
	}
	str[i] = '\0';
	return (str);
}
