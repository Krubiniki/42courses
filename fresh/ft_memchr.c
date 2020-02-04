/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:24:41 by mkrubini          #+#    #+#             */
/*   Updated: 2020/02/03 21:03:29 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int					i;
	const unsigned char	*cps;

	cps = s;
	i = 0;
	while (cps[i] != '\0' && n > 0)
	{
		if (cps[i] == c)
		{
			return ((void *)cps);
		}
		i++;
		n--;
	}
	return (NULL);
}
