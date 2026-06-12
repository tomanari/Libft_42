/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:26:45 by mtomanar          #+#    #+#             */
/*   Updated: 2026/05/28 14:26:45 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t s)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i != s)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (s != 0)
		{
			((unsigned char *)dest)[s - 1] = ((unsigned char *)src)[s - 1];
			s--;
		}
	}
	return (dest);
}

// while (i < s) {
// 	if (d > sr)
// 		d[(s - 1) - i] = sr[(s - 1) - i];
// 	else 
// 		d[i] = sr[i];
// 	i++;
// }