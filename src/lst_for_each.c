/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_for_each.c.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 12:10:43 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/20 15:07:43 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	lst_for_each(t_node *lst, void (*func)(void *))
{
	while (lst)
	{
		func(lst->self);
		lst = lst->next;
	}
	return ;
}
