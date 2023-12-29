/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:37:38 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/28 13:38:27 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack && len == 0)
		return (NULL);
	if (!*needle || !needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i)
			&& *(needle + i) && i <= len)
		{
			if (!*(needle + i + 1) && i < len)
				return ((char *)haystack);
			i ++;
		}
		haystack++;
		len --;
	}
	return (NULL);
}
