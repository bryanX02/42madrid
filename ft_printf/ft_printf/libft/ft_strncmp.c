/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:36:33 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/27 12:48:15 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		cmp;
	size_t	i;

	i = 0;
	cmp = 0;
	while ((*s1 || *s2) && i < n && cmp == 0)
	{
		if (*s1 != *s2)
			cmp = (unsigned char)*s1 - (unsigned char)*s2;
		else
		{
			s1 ++;
			s2 ++;
			i ++;
		}
	}
	if (i < n && *s1 != *s2)
		cmp = (unsigned char)*s1 - (unsigned char)*s2;
	return (cmp);
}
