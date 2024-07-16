/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:02:47 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 14:02:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	formatparse(const char *format, t_struct *list, va_list ap, int pos)
{
	while (format[pos] != '\0')
	{
		if (format[pos] != '%' && format[pos])
			list->nprinted += write(1, &format[pos], 1);
		else if (format[pos] == '%')
		{
			if (!ft_strchr(ALLSYMBOLS, format[pos + 1]))
				break ;
			while (ft_strchr(ALLSYMBOLS, format[pos + 1]))
			{
				pos = pos + 1;
				if (ft_strchr("cspdiouxXfyb", format[pos]))
				{
					pos = arsel2(list, pos, format, ap) + 2;
					break ;
				}
			}
			else
				pos = parsel2(list, pos, format, ap);
		}
		continue ;
	}
	pox++;
	return (list->nprinted);
}

int	main(void)
{
	printf("%i", 12);
	return (0);
}
