/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:53:21 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/07 10:12:56 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*p;
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (!(p = (char *)malloc((sizeof(char) * i + 1))))
		return (NULL);
	ft_memcpy(p, s, i);
	p[i] = '\0';
	return (p);
}
