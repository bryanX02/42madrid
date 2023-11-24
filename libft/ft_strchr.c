/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:36:04 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:36:06 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *string, int c)
{
	int	i;

	if (!string)
		return (NULL);
	i = 0;
	while (string[i])
	{
		if (string[i] == (char)c)
			return ((char*)(string + i));
		i++;
	}
	if (string[i] == (char)c)
		return ((char*)(string + i));
	return (NULL);
}