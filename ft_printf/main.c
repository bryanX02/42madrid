/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:29:09 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 14:29:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int number = 42;
	printf(" %-10d \n", number);
	printf(" %10d \n", number);
	printf(" %010d \n", number);
	printf(" %#10x \n", number);
	printf(" %#x \n", number);;
	return (0);
}
