/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:26:14 by mtomanar          #+#    #+#             */
/*   Updated: 2026/05/28 14:26:14 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	s = (unsigned char	*)src;
	d = (unsigned char	*)dest;
	i = 0;
	if (!dest || !src)
		return (0);
	while (i != n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
