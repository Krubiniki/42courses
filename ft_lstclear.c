/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 18:08:10 by mkrubini          #+#    #+#             */
/*   Updated: 2020/04/28 18:40:31 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *content;
	t_list *next;

	content = *lst;
	if (lst != NULL)
	{
		while (content != NULL)
		{
			next = content->next;
			del(content->content);
			free(content);
			content = next;
		}
	}
	*lst = NULL;
}
