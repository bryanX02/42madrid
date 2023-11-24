/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:36:18 by bquilumb          #+#    #+#             */
/*   Updated: 2023/09/14 15:36:19 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
*ft_strrchr(const char *s, int c) {
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0) {
		if (s[i] == (char) c)
			return ((char *) (s + i));
		i--;
	}
	return (NULL);
}