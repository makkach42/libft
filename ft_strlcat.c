/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:06:19 by makkach           #+#    #+#             */
/*   Updated: 2024/11/12 11:33:54 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	destlen;
	size_t	j;

	srclen = ft_strlen(src);
	j = 0;
	if (dstsize == 0)
		return (srclen);
	destlen = ft_strlen(dest);
	if (dstsize <= destlen)
		return (dstsize + srclen);
	while (destlen + j < dstsize - 1 && src[j] != '\0')
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[destlen + j] = '\0';
	return (srclen + destlen);
}
