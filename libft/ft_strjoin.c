/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:55:00 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/07 12:28:44 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		checklen(char const *s1, char const *s2, int i, unsigned int len)
{
	i = ft_strlen(s1);
	len += i;
	i = ft_strlen(s2);
	len += i;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	int				i;
	unsigned int	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = 0;
	i = 0;
	len = checklen(s1, s2, i, len);
	if (!(join = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len] != '\0')
	{
		join[i + len] = s2[len];
		len++;
	}
	join[i + len] = '\0';
	return (join);
}
