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

	pd = dst;
	ps = src;
	if (n == 0 || (dst == NULL && src == NULL))
		return (dst);
	while (n > 0)
	{
		*pd++ = *ps++;
		n--;
	}
	return (dst);
}
