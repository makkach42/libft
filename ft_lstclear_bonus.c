/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:33:54 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:50:15 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr != 0)
	{
		next_node = ptr->next;
		(*del)(ptr->content);
		free(ptr);
		ptr = next_node;
	}
	*lst = 0;
}
