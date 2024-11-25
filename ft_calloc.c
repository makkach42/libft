/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:53:41 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 20:15:02 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (count != 0 && size > 9223372036854775807 / count)
		return (0);
	tmp = malloc(size * count);
	if (!tmp)
		return (0);
	while (i < (count * size))
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
