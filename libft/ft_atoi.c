/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:37:50 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/24 14:56:41 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *string)
{
	int		number;
	short	is_negative;

	is_negative = 0;
	number = 0;
	while (*string == 32 || (*string > 8 && *string < 14))
		string ++;
	if (*string == '-' || *string == '+')
	{
		if (*string == '-')
			is_negative = 1;
		string ++;
	}
	while (*string >= '0' && *string <= '9')
		number = (number * 10) + (*(string++) - '0');
	if (is_negative)
		number *= -1;
	return (number);
}
