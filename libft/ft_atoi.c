/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:37:50 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/27 12:06:28 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		number;
	short	is_negative;

	is_negative = 0;
	number = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = 1;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
		number = (number * 10) + (*(str++) - '0');
	if (is_negative)
		number *= -1;
	return (number);
}
