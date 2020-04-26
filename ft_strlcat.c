/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:58:21 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 21:56:32 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int dsize;
	unsigned int ssize;
	unsigned int i;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	if (dsize >= dstsize)
		return (dstsize + ssize);
	i = 0;
	while (src[i] != '\0' && dstsize > (dsize + i + 1))
	{
		dst[dsize + i] = src[i];
		i++;
	}
	dst[dsize + i] = '\0';
	return (dsize + ssize);
}
