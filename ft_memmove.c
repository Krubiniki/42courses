/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:15:29 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 15:56:08 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long		i;
	unsigned char		*pd;
	const unsigned char	*ps;

	if (dst == NULL && src == NULL)
		return (NULL);
	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	if (pd > ps)
	{
		i = len;
		while (i-- > 0)
			pd[i] = ps[i];
		return (pd);
	}
	i = -1;
	while (++i < len)
		pd[i] = ps[i];
	return (dst);
}
