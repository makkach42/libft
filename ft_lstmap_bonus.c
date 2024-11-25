/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:55:14 by makkach           #+#    #+#             */
/*   Updated: 2024/11/14 21:10:32 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	void	*p;

	list = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		p = (f)(lst->content);
		new = ft_lstnew(p);
		if (!new)
		{
			free(p);
			ft_lstclear(&list, del);
			return (0);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
