/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:20:04 by plau              #+#    #+#             */
/*   Updated: 2022/09/05 18:52:40 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
/*
ft_lstclear(&tmp, del); //delete and free the given node
ft_lstadd_back(&new, tmp); //add the node "new" at the end of the list
*/
