/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:24:41 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 15:57:44 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long		i;
	const char	*cps;

	cps = s;
	i = -1;
	while (++i < n)
	{
		if (cps[i] == c)
			return ((void *)(cps + i));
	}
	return (NULL);
}

