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

static int int_len(int x)
{
	int 		len;
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
char *ft_itoa(int n)
{
    int		len;
    char	*dest;
	int		index;
	long int	x;

	x = n;
	len = int_len(n);
    dest = malloc(len + 1);
	index = len - 1;
	if (x < 0)
	{
		dest[0] = '-';
		x *= -1;
	}
	while (x > 9)
    {
        dest[index] = (x % 10) + '0';
        x /= 10;
		index--;
    }
    if (x <= 9)
        dest[index] = x + '0';
    dest[len] = '\0';
    return (dest);
}	
