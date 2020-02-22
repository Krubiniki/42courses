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
	char	*ps1;
	char	*ps2;
	int	i;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	i = 0;
	while (n > 0)
	{
		if (ps1[i] != ps2[i])
		{
			if((ps1[i] - ps2[i]) > 0)
				return (1);
			else
				return (-1);
		}
		i++;
		n--;
	}
	return (0);
}
