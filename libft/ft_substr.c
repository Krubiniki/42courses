/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:00:55 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 11:30:52 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(sub = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	while (i < len && s[i + start] != '\0')
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
