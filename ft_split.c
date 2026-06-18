/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:54:29 by mtomanar          #+#    #+#             */
/*   Updated: 2026/06/16 18:56:12 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(const char *src, char c)
{
	unsigned int	i;

	while(*src)
	{
		if (*src == c)
			src++;
		else
		{
			i++;
			while (*src && *src != c)
				src++;
		}
	}
	return (i);
}

static char	**mem_cleaner(char **array, unsigned int j)
{
	while (j-- > 0)
		free(array[j]);
	free(array);
	return (NULL);
}

static char	**set_array(char **array, char const *src, char c)
{
	unsigned int	strt;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] == c)
			i++;
		else
		{
			strt = i;
			while (src[i] && src[i] != c)
				i++;
			array[j] = ft_substr (src, strt, (i - strt));
			if (! array[j])
				return (mem_cleaner(array, j));
			j++;
		}
	}
	return (array);
}	

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	words;

	if (!s)
		return (NULL);
	words = count_w(s, c);
	array = ft_calloc(words + 1, sizeof(char *));
	if (!array)
		return (NULL);
	return (set_array(array, s, c));
}