/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_head.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:27:39 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/20 15:00:25 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_node	*lst_head(t_node *lst)
{
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}