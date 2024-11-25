/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:44:26 by makkach           #+#    #+#             */
/*   Updated: 2024/11/11 19:49:36 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i += 1;
	j = (char *)malloc(i * sizeof(char));
	if (!j)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		j[i] = s1[i];
		i++;
	}
	j[i] = '\0';
	return (j);
}
