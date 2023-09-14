/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:00:05 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/18 13:51:30 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str && boolean == 1)
	{
		if (!(*str >= 48 && *str <= 57))
			boolean = 0;
		str ++;
	}
	return (boolean);
}
/*
int	main(int arg, char *args[])
{
    if (arg == 2)
	    printf("%i", ft_str_is_numeric(args[1]));
	return (0);
}*/
