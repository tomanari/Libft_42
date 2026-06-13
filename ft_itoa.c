/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:41:06 by mtomanar          #+#    #+#             */
/*   Updated: 2026/06/12 21:10:51 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int x)
{
	int				len;
	long int	nb;

	len = 0;
	nb = x;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	if (nb <= 9)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*dest;
	int				index;
	long int	value;

	value = n;
	len = int_len(n);
	dest = malloc(len + 1);
	index = len - 1;
	if (value < 0)
	{
		dest[0] = '-';
		value *= -1;
	}
	while (value > 9)
	{
		dest[index] = (value % 10) + '0';
		value /= 10;
		index--;
	}
	if (value <= 9)
		dest[index] = value + '0';
	dest[len] = '\0';
	return (dest);
}
