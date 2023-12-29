/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:16:09 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/29 14:56:16 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*result;
	t_list	*aux;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		cont = f(lst->content);
		aux = ft_lstnew(cont);
		if (!aux)
		{
			del(cont);
			ft_lstclear(&result, (*del));
			return (result);
		}
		ft_lstadd_back(&result, aux);
		lst = lst->next;
	}
	return (result);
}
