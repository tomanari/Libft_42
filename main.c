/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:00:42 by mtomanar          #+#    #+#             */
/*   Updated: 2026/06/16 19:51:19 by mtomanar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("TESTE NOVO\n");
	printf("%s\n",ft_strtrim("aaaa", "a"));
	printf("%s\n",ft_strtrim("", "a"));
	printf("%s\n",ft_strtrim("Hello", ""));
	printf("%s\n",ft_strtrim("abbabOLAabb", "ab"));
	printf("%s\n",ft_strtrim("Hello", "xyz"));
	ft_strtrim("   Hello   ", " ");
	ft_strtrim("aaHelloaa", "a");
}
