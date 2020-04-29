/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:25:19 by mkrubini          #+#    #+#             */
/*   Updated: 2020/04/28 17:00:02 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *content;

	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	content = *lst;
	while (content->next != NULL)
		content = content->next;
	content->next = new;
	new->next = NULL;
}
