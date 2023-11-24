/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:32:37 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:32:39 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

int	ft_isdigit(int c)
{
    int	boolean;

    boolean = 1;
    if (!(str >= 48 && str <= 57))
            boolean = 0;
    return (boolean);
}

/*int	main(int arg, char *args[])
{
    if (arg == 2)
        printf("%i", ft_isdigit(*args[1]));
    return (0);
}*/