/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:16:09 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/27 13:16:13 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*front;
	t_list	*aux;

	if (!f || !del)
		return (NULL);
	front = NULL;
	while (lst)
	{
		aux = ft_lstnew_bonus((*f)(lst->content));
		if (aux)
		{
			while (front)
			{
				aux = front->next;
				(*del)(front->content);
				free(front);
				front = aux;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back_bonus(&front, aux);
		lst = lst->next;
	}
	return (front);
}
