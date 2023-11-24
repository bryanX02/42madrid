/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:05:17 by ncolomer          #+#    #+#             */
/*   Updated: 2019/11/12 19:56:48 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
	t_list	*node;

	if (!(node = (t_list*)malloc(sizeof(*node))))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
