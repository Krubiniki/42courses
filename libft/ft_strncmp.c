/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:59:14 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/07 09:45:40 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && n > 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		n--;
		i++;
	}
	if (n == 0)
		i--;
	if (s1[i] > s2[i] || s2[i] > s1[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
