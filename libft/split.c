/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:57:26 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 19:59:03 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*cut(char *split, char *str, int count)
{
	int index;
	int idx;

	if (index == NULL)
		index = 0;
	index += count;
	idx = 0;
	if (!(split = malloc(sizeof(char) * count)))
		return (NULL);
	while (idx < count)
	{
		split[idx] = str[index];
		idx++;
	}
	split[count] = '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	int	count;
	int	cutx;

	if (s == NULL)
		return (NULL);
	count = 0;
	cutx = 0;
	str = (char *)s;
	while (str[count] != '\0')
	{
		if (str[count] == c)
		{
			split[cutx][count] = cut(split[cutx], str, count);
			cutx++;
			while (count > 0 && *str != '\0')
			{
				str++;
				count--;
			}
		}
		count++;
	}
	return (split);
}
