/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_prepend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:26:27 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/20 15:00:19 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	lst_prepend(t_node *lst, t_node *elem)
{
	while (lst->prev)
		lst = lst->prev;
	lst->prev = elem;
	return ;
}
