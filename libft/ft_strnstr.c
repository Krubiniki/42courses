/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:55:43 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 15:13:35 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] != '\0' && len > 0)
	{
		j = 0;
		k = 0;
		while (haystack[i + k] == needle[j] && needle[j] && (i + k) < len)
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
