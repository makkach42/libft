/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:51:30 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:49:59 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	i = 0;
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	while (i < n)
	{
		if (*(s11 + i) != *(s22 + i))
			return (*(s11 + i) - *(s22 + i));
		i++;
	}
	return (0);
}
