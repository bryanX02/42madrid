/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:35 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/27 11:53:52 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	front;
	size_t	back;

	front = 0;
	while (s1[front] && is_in(s1[front], set))
		front++;
	back = ft_strlen(s1);
	while (back > front && is_in(s1[back - 1], set))
		back--;
	str = (char *)malloc(sizeof(*s1) * (back - front + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (front < back)
		str[i++] = s1[front++];
	str[i] = 0;
	return (str);
}
