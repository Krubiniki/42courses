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
	unsigned char		cc;

	pd = (unsigned char *)dst;
	ps = (const unsigned char *)src;
	cc = (unsigned char)c;
	while (n > 0)
	{
		*pd++ = *ps++;
		if (*(ps - 1) == cc)
			return (pd);
		n--;
	}
	return (NULL);
}
