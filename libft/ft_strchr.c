/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:52:09 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 19:52:41 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s[0] == '\0' || s[0] == c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (NULL);
}