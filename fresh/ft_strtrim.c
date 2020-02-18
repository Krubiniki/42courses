/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:48:02 by mkrubini          #+#    #+#             */
/*   Updated: 2020/02/12 20:22:51 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ps1;
	char	*pset;
	char	*final;
	int		fin;
	int		count;
	int		ini;

	ps1 = (char *)s1;
	pset = (char *)set;
	fin = 0;
	count = 0;
	ini = 0;
	while (ps1[fin] != '\0')
		fin++;
	while (ps1[ini] == pset[count])
	{
		count++;
		if(pset[count] == '\0')
			count = 0;
		ini++;
	}
	while (ps1[fin] == pset[count])
	{
		count++;
		if (pset[count] == '\0')
			count = 0;
		fin--;
	}
	count = 0;
	if (!(final = malloc(sizeof(char)*(fin - ini))))
		return (NULL);
	while (fin > ini)
	{
		ps1[ini] = final[count];
		ini++;
		count++;
	}
	final[count] = '\0';
	return(final);
}
