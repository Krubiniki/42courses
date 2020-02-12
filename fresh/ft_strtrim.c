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
	int		i;
	int		j;

	ps1 = (char *)s1;
	set = (char *)set;
	i = 0;
	while(ps1[i] != '\0')
	{
		j = 0;
		if(ps1[i] == pset[j])
		{
			j++;
		}
		i++;
	}
}
