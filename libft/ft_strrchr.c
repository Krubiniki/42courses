/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:13:42 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 20:15:21 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ps;

	ps = s;
	if (s == NULL)
		return (NULL);
	if (s[0] == '\0' || s[0] == c)
		return ((char *)s);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*s++)
	{
		if (*s == c)
			ps = s;
	}
	if (*ps != c)
		return (NULL);
	return ((char *)ps);
}
