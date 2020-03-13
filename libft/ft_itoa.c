/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:45:02 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/10 22:50:44 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	checkpossize(int ncopy)	//size 2 = (1 pro byte '\0' ) + (1 pro número final)
{
	int size;

	size = 2;
	if (ncopy == 0)
		return (size);
	while (ncopy >= 10)
	{
		size++;
		ncopy = ncopy / 10;
	}
	return (size);	
}

int	checknegsize(int ncopy)	//size 3 = (1 pro byte '\0' ) + (1 pro '-') + (1 pro número final)
{
	int size;

	size = 3;
	while (ncopy <= -10)
	{
		size++;
		ncopy = ncopy / 10;
	}
	return (size);
}

char	*putnegnbr(char *nbr, int ncopy, int size)
{
	int count;

	count = size - 2;
	nbr[0] = '-';
	while (ncopy <= -10)
	{
		nbr[count] = ((ncopy % 10) * -1) + '0';
		ncopy = ncopy / 10;
		count--;
	}
	if (ncopy > -10)
		nbr[1] = (ncopy * -1) + '0';
	return (nbr);
}

char	*putposnbr(char *nbr, int ncopy, int size)
{
	int count;

	count = size - 2;
	if (ncopy == 0)
	{
		nbr[0] = '0';
		return (nbr);
	}
	while (ncopy >= 10)
	{
		nbr[count] = (ncopy % 10) + '0';
		ncopy = ncopy / 10;
		count--;
	}
	if (ncopy < 10)
		nbr[count] = ncopy + '0';		
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int	size;
	int	ncopy;

	size = 0;
	ncopy = n;
	if (n < 0)
		size = checknegsize(ncopy);
	else
		size = checkpossize(ncopy);
	if (!(nbr = malloc(sizeof(char) * size)))
		return (NULL);
	ncopy = n;
	if (n < 0)
		nbr = putnegnbr(nbr, ncopy, size);
	else
		nbr = putposnbr(nbr, ncopy, size);
	nbr[size - 1] = '\0';
	return (nbr);
}
