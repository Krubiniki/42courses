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

char	**cutstring(char **split, char *str, int count)
{
	int index;
	int cut2;
	int start;

	index = -1;	
	cut2 = 0;
	while (str[count] != '\0')
	{
		while (str[count] == c)
			count++;
		if (str[count] != c)
			start = count;
		while (str[count] != c)
			count++;
		if (!(split[cut2] = malloc(sizeof(char) * ((count - start) + 1))))
			return (NULL);
		while (++index < (count - start))
			split[cut2][index] = str[index + start];
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
	int	count;
	int	cut;

	if (s == NULL)
		return (NULL);
	count = 0;
	str = (char *)s;
	cut = 0;
	while (str[count] != '\0')
	{
		while (str[count] == c && str[count] != '\0')
			count++;
		if ((str[count - 1] == c && str[count] != c) 
						|| (count == 0 && str[count] != c) )
			cut++;
		count++;
	}
	if (!(split = malloc(sizeof(char *) * (cut + 1))))
			return (NULL);
	count = 0;
	return (cutstring(split,str,count));
}
