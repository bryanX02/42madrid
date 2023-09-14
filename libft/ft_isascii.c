/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:01:03 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:52:35 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str && boolean == 1)
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
			boolean = 0;
		str ++;
	}
	return (boolean);
}
/*
int	main(int arg, char *args[])
{
	if (arg == 2)
	{
		printf("%i", ft_str_is_alpha(args[1]));
	}
	return (0);
}*/
