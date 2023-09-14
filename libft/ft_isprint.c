/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:24:14 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:15:36 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str && boolean == 1)
	{
		if (!(*str >= 32 && *str <= 126))
			boolean = 0;
		str ++;
	}
	return (boolean);
}
/*
int	main(int arg, char *args[])
{
    if (arg == 2)
	    printf("%i", ft_str_is_printable(args[1]));
	return (0);
}*/
