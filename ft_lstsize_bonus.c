/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:21:03 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:50:02 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	if (!lst)
		return (0);
	ptr = lst;
	count = 0;
	while (ptr != 0)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
