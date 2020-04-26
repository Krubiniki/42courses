/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:48:02 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 14:15:58 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		count_fin(char const *s1, char const *set)
{
	unsigned int	fin;
	int				count;

	fin = 0;
	count = 0;
	while (s1[fin] != '\0')
		fin++;
	while (set[count] != '\0')
	{
		if (set[count] == s1[fin - 1])
		{
			fin--;
			count = -1;
		}
		count++;
	}
	return (fin);
}

int		count_ini(char const *s1, char const *set)
{
	unsigned int	ini;
	int				count;

	ini = 0;
	count = 0;
	while (set[count] != '\0')
	{
		if (set[count] == s1[ini])
		{
			count = -1;
			ini++;
		}
		count++;
	}
	return (ini);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	fin;
	unsigned int	ini;
	unsigned int	count;

	if (s1 == NULL)
		return (NULL);
	ini = count_ini(s1, set);
	if (ini == ft_strlen(s1))
	{
		trimmed = malloc(sizeof(char));
		trimmed[0] = '\0';
		return (trimmed);
	}
	fin = count_fin(s1, set);
	count = 0;
	if (!(trimmed = malloc(sizeof(char) * ((fin - ini) + 1))))
		return (NULL);
	while (count < (fin - ini))
	{
		trimmed[count] = s1[ini + count];
		count++;
	}
	trimmed[count] = '\0';
	return (trimmed);
}
