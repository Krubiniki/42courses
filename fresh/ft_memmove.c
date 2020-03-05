/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:15:29 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 19:53:00 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int		i;
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = dst;
	ps = src;
	i = len;
	if (pd > ps)
	{
		while (i > 0)
		{
			pd[i - 1] = ps[i - 1];
			i--;
		}
	}
	else
	{
		while (len > 0)
		{
			*pd++ = *ps++;
			len--;
		}
	}
	return (dst);
}
