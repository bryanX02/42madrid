/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:45:31 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/28 12:17:15 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i ++;
	if (size > i)
	{
		while (*src != '\0' && i < size - 1)
		{
			dest[i] = *src;
			src ++;
			i ++;
		}
		dest[i] = '\0';
		while (*src != '\0')
		{
			i ++;
			src ++;
		}
	}
	else
		i = size;
	return (i);
}
/*
int main(int argc, char *args[])
{
    char			dest[20] = "hey";
	unsigned int	size;

	size = *args[2] - '0';
    if (argc == 3)
    {
        printf("%u", ft_strlcat(dest, args[1], size));
        printf("%s", dest);
    }
    return (0);
}*/
