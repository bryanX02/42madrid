/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:06:41 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/17 19:15:46 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_strlen(char *str)
{
	int	counter;

	while (*str)
	{
		counter ++;
		str ++;
	}	
	return (counter - 1);
}
/*
int	main(void)
{
	char	*str;

	str = "hola";
	write(1, &(char){'0' + ft_strlen(str)}, 1);
	return (0);
}*/
