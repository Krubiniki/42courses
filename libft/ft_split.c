/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:57:26 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 11:19:33 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		pastestring(char **split, int cut2, char *str, int *i)
{
	int index;

	index = 0;
	while ((i[1] + index) < i[0])
	{
		split[cut2][index] = str[index + i[1]];
		index++;
	}
	return (index);
}

char	**cutstring(char **split, char *str, char c, int cut)
{
	int index;
	int cut2;
	int i[2];

	cut2 = 0;
	i[1] = 0;
	i[0] = 0;
	while (str[i[0]] != '\0' && cut2 < cut)
	{
		while (str[i[0]] == c)
			i[0]++;
		if (str[i[0]] != c)
			i[1] = i[0];
		while (str[i[0]] != c && str[i[0]] != '\0')
			i[0]++;
		if (!(split[cut2] = malloc(sizeof(char) * ((i[0] - i[1]) + 1))))
			return (NULL);
		index = pastestring(split, cut2, str, i);
		split[cut2][index] = '\0';
		cut2++;
	}
	split[cut2] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	int		count;
	int		cut;

	if (s == NULL)
		return (NULL);
	count = 0;
	str = (char *)s;
	cut = 0;
	while (str[count] != '\0')
	{
		while (str[count] == c && str[count + 1] != '\0')
			count++;
		if ((count == 0 && str[count] != c) || (str[count - 1] == c &&
				str[count] != c))
			cut++;
		count++;
	}
	if (!(split = malloc(sizeof(char *) * (cut + 1))))
		return (NULL);
	return (cutstring(split, str, c, cut));
}
