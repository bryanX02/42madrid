/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:44:23 by bquilumb          #+#    #+#             */
/*   Updated: 2024/07/31 14:44:25 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define UP_HEX "0123456789ABCDEF"
# define LOW_HEX "0123456789abcdef"

int		ft_printf(char const *str, ...);

void	ft_putchar(char c, size_t *counter);
void	ft_putstr(char *str, size_t *counter);
void	ft_putnbr(int num, size_t *counter);
void	ft_putunint(unsigned int num, size_t *counter);
void	ft_hexptr(unsigned int num, size_t *counter, char *base);
void	ft_putptr(void *ptr, size_t *counter);

char	*ft_strptr(unsigned long long n, char *base);

#endif
