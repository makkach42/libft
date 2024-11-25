/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:28:13 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:49:57 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (n > 0)
	{
		*((unsigned char *)dst + i) = *((const unsigned char *)src + i);
		i++;
		n--;
	}
	return (dst);
}
