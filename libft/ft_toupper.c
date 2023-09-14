/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:28:22 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:17:21 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strupcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux)
	{
		if (*aux >= 97 && *aux <= 122)
			*aux -= 32;
		aux ++;
	}
	return (str);
}
/*
int	main(int arg, char *args[])
{

    if (arg == 2)
        printf("%s", ft_strupcase(args[1]));
    return (0);
}*/
