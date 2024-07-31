/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:44:50 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 14:44:52 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)s = 0;
		s ++;
		n --;
	}
}

void	*ft_calloc_lb(size_t count, size_t size)
{
	void	*pointer;

	if (count && size && count > (4294967295 / size))
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}

static size_t	ft_baslen(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	baslen;

	len = 1;
	baslen = ft_strlen(base);
	while (n >= baslen)
	{
		n /= baslen;
		len++;
	}
	return (len);
}

char	*ft_strptr(unsigned long long n, char *base)
{
	char	*str;
	int		numlen;
	int		baslen;

	numlen = ft_baslen(n, base);
	baslen = ft_strlen(base);
	str = ft_calloc_lb((numlen + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (numlen)
	{
		numlen = numlen - 1;
		str[numlen] = base[n % baslen];
		n /= baslen;
	}
	return (str);
}
