/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:37:50 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:37:53 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *string)
{
    int     number;
    short   isNegative;

    isNegative = 0;
	number = 0;

    while (*string == 32 || (*string > 8 && *string < 14))
        string ++;

    if (*string == '-' || *string == '+')
    {
        if (*string == '-')
            isNegative = 1;
	    string ++;
    }

    while (*string >= '0' && *string <= '9')
        number = (number * 10) + (*(string++) - '0');

    if (isNegative)
        number *= -1;

    return (number);
}