/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:33:29 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/24 15:19:37 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	boolean;

	boolean = 0;
	if (c >= 32 && c <= 126)
		boolean = 1;
	return (boolean);
}
