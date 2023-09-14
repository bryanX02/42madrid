/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:40:27 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 17:04:41 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = dest;
	while (*src && i < size - 1)
	{
		if (size != 0)
			*aux = *src;
		src ++;
		aux ++;
		i ++;
	}
	if (size != 0)
		*aux = '\0';
	while (*src)
	{
		src ++;
		i ++;
	}
	return (i);
}
/*
int	main(void)
{
	char	dest[100];
	char	*src;
    char    *src2;
	int		n;

	n = 5;
	src = "holafffa";
    src2 = "holafffa";
	printf("%lu", strlcpy(dest, src, n));
    printf("%s", dest);
    printf("%u", ft_strlcpy(dest, src2, n));
    printf("%s", dest);
    return (0);
}*/
