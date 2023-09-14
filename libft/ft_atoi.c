/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:38:37 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 12:51:13 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	get_negatives(char *str)
{
	int		negatives;
	char	*aux;

	negatives = 0;
	aux = str;
	while ((*aux < 48 || *aux > 57) && negatives != -1)
	{
		if (*aux == '-' || *aux == '+')
		{
			if (*aux == '-')
				negatives ++;
		}
		else
			negatives = -1;
		aux ++;
	}
	return (negatives);
}

void	set_number(char *str, int *number)
{
	int	is_number;

	is_number = 0;
	while (*str && is_number != -1)
	{
		if (is_number)
		{
			if (*str >= 48 && *str <= 57)
			{
				*number = (*number * 10) + (*str - '0');
				is_number = 1;
			}
			else
				is_number = -1;
		}
		else
		{
			if (*(str) >= 48 && *(str) <= 57)
			{
				is_number = 1;
				str --;
			}		
		}
		str ++;
	}
}

int	ft_atoi(char *str)
{
	int		number;
	int		negatives;
	int		is_number;

	number = 0;
	is_number = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
		str ++;
	negatives = get_negatives(str);
	if (negatives != -1)
	{
		set_number(str, &number);
		if (negatives % 2 != 0)
			number *= -1;
	}
	return (number);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_atoi(argv[1]));
	return (0);
}*/
