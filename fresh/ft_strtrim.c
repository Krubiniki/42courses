/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:48:02 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/04 20:13:19 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		count_fin(char const *s1, char const *set)
{
	unsigned int fin;
	unsigned int count;

	fin = 0;
	count = 0;
	while (s1[fin] != '\0')
		fin++;
	while (s1[fin] == set[count])
	{
		count++;
		if (set[count] == '\0')
		{
			count = 0;
			fin--;
		}
	}
	return (fin);
}

int		count_ini(char const *s1, char const *set)
{
	unsigned int ini;
	unsigned int count;

	ini = 0;
	count = 0;
	while (s1[ini] == set[count])
	{
		count++;
		if (set[count] == '\0')
		{
			count = 0;
			ini++;
		}
	}
	return (ini);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	fin;
	unsigned int	ini;
	unsigned int	count;

	fin = count_fin(s1, set);
	ini = count_ini(s1, set);
	count = 0;
	if (!(trimmed = malloc(sizeof(char) * ((fin - ini) + 1))))
		return (NULL);
	while (ini < fin)
	{
		trimmed[count] = s1[ini];
		ini++;
		count++;
	}
	trimmed[ini + 1] = '\0';
	return (trimmed);
}
