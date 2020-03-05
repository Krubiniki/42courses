/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:53:21 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 19:58:13 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*p;
	unsigned int	i;

	i = 0;
	if (s[i] == '\0')
		return (NULL);
	while (s[i] != '\0')
		i++;
	p = ft_calloc(i, sizeof(char));
	return (ft_memcpy(p, s, i));
}
