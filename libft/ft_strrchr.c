/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:13:42 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 17:31:11 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (--i >= 0)
	{
		if (s[i] == (const char)c)
			return ((char *)&s[i]);
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
