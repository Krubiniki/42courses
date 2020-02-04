/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 21:08:41 by mkrubini          #+#    #+#             */
/*   Updated: 2020/02/03 21:19:53 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ps1 != *ps2)
		{
			return (*ps1 - *ps2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
