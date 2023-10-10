/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:32:54 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:32:56 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(char str)
{
    int	boolean;

    boolean = 1;
    if (!((str >= 65 && str <= 90) || (str >= 97 && str <= 122) || (str >= 48 && str <= 57)))
        boolean = 0;
    return (boolean);
}

int	main(int arg, char *args[])
{
    if (arg == 2)
        printf("%i", ft_isalnum(*args[1]));
    return (0);
}