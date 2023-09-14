/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:36:33 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:20:37 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux)
	{
		if (*aux >= 65 && *aux <= 90)
			*aux += 32;
		aux ++;
	}
	return (str);
}
/*
int	main(int arg, char *args[])
{

    if (arg == 2)
        printf("%s", ft_strlowcase(args[1]));
    return (0);
}*/
