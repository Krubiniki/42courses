/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:41:33 by mkrubini          #+#    #+#             */
/*   Updated: 2020/03/14 14:38:29 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

/*	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}*/
	if (!(ptr = malloc((sizeof(char) * (count * size)))))
		return (NULL);
	ptr = ft_memset(ptr, 0, (count * size));
	return (ptr);
}
