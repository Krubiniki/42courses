/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:14:54 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 12:02:32 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*pd;
	const unsigned char		*ps;
	unsigned long			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	pd = dst;
	ps = src;
	i = -1;
	while (++i < n)
		pd[i] = ps[i];
	return (dst);
}
