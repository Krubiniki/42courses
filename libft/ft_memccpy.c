/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:43:01 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 17:47:39 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;
	unsigned char		uc;
	unsigned long		i;

	pd = dst;
	ps = src;
	uc = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		pd[i] = ps[i];
		if (ps[i] == uc)
			return (&pd[i + 1]);
	}
	return (NULL);
}
