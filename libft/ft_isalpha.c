/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:32:04 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:32:23 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

int	ft_isalpha(char str)
{
    int	type;

    if (str >= 65 && str <= 90)
        type = 1;
    else if (str >= 97 && str <= 122)
        type = 2;
    else
        type = 0;
    return (type);
}
/*
int	main(int arg, char *args[])
{
	if (arg == 2)
	{
		printf("%i", ft_isalpha(*args[1]));
	}
	return (0);
}*/