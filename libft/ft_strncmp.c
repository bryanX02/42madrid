/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:33:48 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/28 11:09:54 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				cmp;
	unsigned int	i;

	i = 0;
	cmp = 0;
	while ((*s1 || *s2) && i < n && cmp == 0)
	{
		if (*s1 != *s2)
			cmp = *s1 - *s2;
		else
		{
			s1 ++;
			s2 ++;
			i ++;
		}
	}
	return (cmp);
}
/*
int main(int argc, char *args[])
{
	unsigned int	n;

	n = *args[3] - '0';
    if (argc == 4)
        printf("%i", ft_strncmp(args[1], args[2], n));
    return (0);
}*/
