/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:24:04 by makkach           #+#    #+#             */
/*   Updated: 2024/11/15 12:28:19 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mincase(int n)
{
	char	*str;

	(void)n;
	str = malloc(12);
	if (!str)
		return (0);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char	*zerocase(int n)
{
	char	*str;

	(void)n;
	str = malloc(2 * sizeof(char));
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static int	intlen(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*fillstr(char *str, int count, int n, int ifnegative)
{
	while (count > 0)
	{
		str[count + ifnegative - 1] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		i;
	int		count;
	char	*str;

	negative = 0;
	i = 0;
	if (n == -2147483648)
		return (mincase(n));
	if (n == 0)
		return (zerocase(n));
	if (n < 0)
	{
		n = -n;
		negative = 1;
	}
	count = intlen(n);
	str = malloc((count + negative + 1) * sizeof(char));
	if (!str)
		return (0);
	if (negative)
		str[0] = '-';
	i = count;
	str[count + negative] = '\0';
	return (fillstr(str, count, n, negative));
}
