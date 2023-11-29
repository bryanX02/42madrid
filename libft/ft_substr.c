/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:55:17 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/29 10:23:09 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	aux_len;
	char	*new_str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	aux_len = ft_strlen(s + start);
	if (len < aux_len)
		aux_len = len;
	new_str = malloc(sizeof(char) * (aux_len + 1));
	if (!new_str)
		return (new_str);
	i = 0;
	while (i < aux_len)
	{
		new_str[i] = s[start + i];
		i ++;
	}
	new_str[i] = '\0';
	return (new_str);
}
