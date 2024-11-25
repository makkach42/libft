/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:06:10 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:49:55 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	destsrc(size_t i, size_t len, char *dest, const char *src1)
{
	while (i < len)
	{
		*(dest + i) = *(src1 + i);
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*src1;

	i = 0;
	if (len == 0 || dst == src)
		return (dst);
	dest = (char *)dst;
	src1 = (const char *)src;
	if (src < dst && dst < src + len)
	{
		while (len > 0)
		{
			*(dest + len - 1) = *(src1 + len - 1);
			len--;
		}
	}
	else
	{
		destsrc(i, len, dest, src1);
	}
	return (dest);
}
