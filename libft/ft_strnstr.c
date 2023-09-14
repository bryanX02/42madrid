/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:50 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/28 12:25:13 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find);
void	aux_tf_check(char *aux_str, char *aux_tf, int *occurs);

void	aux_tf_check(char *aux_str, char *aux_tf, int *occurs)
{
	while (*aux_tf != '\0' && *occurs == 1)
	{
		if (*aux_tf != *aux_str)
			*occurs = 0;
		aux_tf ++;
		aux_str ++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*pointer;
	char	*aux_str;
	char	*aux_tf;
	int		occurs;

	pointer = NULL;
	if (to_find[0] == '\0')
		pointer = str;
	else
	{
		while (*str != '\0' && pointer != str)
		{
			aux_str = str;
			aux_tf = to_find;
			occurs = 1;
			aux_tf_check(aux_str, aux_tf, &occurs);
			if (occurs == 1)
				pointer = str;
			str ++;
		}
	}
	return (pointer);
}
/*
int main(int argc, char *args[])
{
    if (argc == 3)
        printf("%s", ft_strstr(args[1], args[2]));
    return (0);
}*/
