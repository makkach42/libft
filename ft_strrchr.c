/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:43:34 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:49:11 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			res = (char *)&str[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (res);
}
