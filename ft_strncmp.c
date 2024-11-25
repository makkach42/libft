/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:54:08 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:49:23 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t			i;
	unsigned char	*str11;
	unsigned char	*str22;

	i = 0;
	str11 = (unsigned char *)str1;
	str22 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str11[i] == '\0' || str22[i] == '\0')
		{
			return ((str11[i] - str22[i]));
		}
		if (str11[i] != str22[i])
			return (str11[i] - str22[i]);
		i++;
	}
	return (0);
}
