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

char	**cutstring(char **split, char *str, char c, int cut)
{
	int index;
	int cut2;
	int start;
	int count;

	index = 0;	
	cut2 = 0;
	start = 0;
	count = 0;
	while (str[count] != '\0' && cut2 < cut)
	{
		while (str[count] == c)
			count++;
		if (str[count] != c)
			start = count;
		while (str[count] != c && str[count] != '\0')
			count++;
		if (!(split[cut2] = malloc(sizeof(char) * ((count - start) + 1))))
			return (NULL);
		while ((start + index) < count)
		{
			split[cut2][index] = str[index + start];
			index++;
		}
		split[cut2][index] = '\0';
		cut2++;
		index = 0;
	}
	split[cut2] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	int	count;
	int	cut;

	if (s == NULL)
		return (NULL);
	count = 0;
	str = (char *)s;
	cut = 0;
	
	while (str[count] != '\0')
	{
		while (str[count] == c && str[count + 1] != '\0')
			count++;
		if ((count == 0 && str[count] != c) || (str[count - 1] == c && str[count] != c)) 
			cut++;
		count++;
	}
	if (!(split = malloc(sizeof(char *) * (cut + 1))))
		return (NULL);
	return (cutstring(split, str, c, cut));
}
