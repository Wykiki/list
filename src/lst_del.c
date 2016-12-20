/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 13:44:11 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/20 15:03:29 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	lst_del(t_node **lst, void (*del)(void *))
{
	t_node	*prev;
	t_node	*next;

	prev = (*lst)->prev;
	next = (*lst)->next;
	del((*lst)->self);
	if (prev == NULL && next == NULL)
		return ;
	else if (prev == NULL)
		next->prev = NULL;
	else if (next == NULL)
		prev->next = NULL;
	else
	{
		next->prev = prev;
		prev->next = next;
	}
	return ;
}
