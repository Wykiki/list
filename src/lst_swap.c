/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:32:13 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/20 14:59:59 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	lst_swap(t_node *lhs, t_node *rhs)
{
	t_node	*tmp;

	if (lhs->prev != NULL)
		lhs->prev->next = rhs;
	if (rhs->next != NULL)
		rhs->next->prev = lhs;
	tmp = lhs->prev;
	lhs->prev = rhs->prev;
	rhs->prev = tmp;
	tmp = lhs->next;
	lhs->next = rhs->next;
	rhs->next = tmp;
	return ;
}
