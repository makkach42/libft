/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:06:36 by makkach           #+#    #+#             */
/*   Updated: 2024/11/15 14:51:57 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	str2len;
	size_t	i;
	size_t	j;

	str2len = ft_strlen(needle);
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (n == 0 || haystack[0] == '\0')
		return (NULL);
	if (str2len > n)
		return (NULL);
	while (i <= n - str2len)
	{
		j = 0;
		while (j < str2len && haystack[i + j] == needle[j])
			j++;
		if (j == str2len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
